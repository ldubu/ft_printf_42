/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:02:30 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/04 11:02:30 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_flags(va_list ptr,const char **str,int len)
{
	char		types;
	f_struct	f1;
	if (**str == '%')
	{
		ft_putstr("%%");
		return (++len);
	}
	ft_symbols(&f1, str);
	f1.width = 0;
	f1.precision = 0;
	ft_width_precision(&f1,  str);
	types = *(ft_strrchr("cspdiuxX", **str));
	if (types)
	{
		f1.types = types;
		(*str)++;
	}
	ft_args_to_str(&f1, ptr);
	return (len);
}

void ft_symbols(f_struct *f1, const char **str)
{
	while (ft_strrchr("-+0# ", **str) != NULL)
	{
		if (**str == '-')	
			f1->minus_fla = 1;
		else if (**str == '+')
			f1->plus_fla = 1;
		else if (**str == ' ')
			f1->space_fla = 1;
		else if (**str == '0')
			f1->zero_fla = 1;
		else if (**str == '#')
			f1->diese_fla = 1;
		(*str)++;
	}
}

void	ft_width_precision(f_struct *f1, const char **str)
{
	while (ft_strrchr("0123456789", **str) != NULL)
	{
		f1->width = f1->width * 10 + **str - '0';
		(*str)++;
	}
	if (**str == '.')
	{
		(*str)++;
		while (ft_strrchr("0123456789", **str) != NULL)
		{
			f1->precision = f1->precision * 10 + **str - '0';
			(*str)++;
		}
	}
}

void	ft_args_to_str(f_struct *f1, ptr)
{
	char	*str_args;

	if (f1.types == 'c')
		str_args = ft_strc(ptr);
	else if (f1.types == 's')
		str_args = va_arg(ptr, char *);
	else if (f1.types == 'p')
		str_args = ft_address(va_arg(ptr, unsigned long));
	else if (f1.types == 'd' || f1.types == 'i')
		str_args = ft_itoa(va_arg(ptr, int));
	else if (f1.types == 'u')
		str_args = ft_unsi_itoa(va_arg(ptr, unsigned int));
	else if (f1.types == 'x')
		str_args = ft_hexa(va_arg(ptr, unsigned int));
	else if (f1.types == 'X')
		str_args = ft_toupper(ft_hexa(ptr, unsigned int));
	
}