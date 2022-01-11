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

int	ft_flags(va_list ptr, const char **str, int len)
{
	char		types;
	t_struct	f1;

	if (**str == '%')
	{
		ft_putchar('%');
		(*str)++;
		return (++len);
	}
	ft_ini_struct(&f1);
	ft_symbols(&f1, str);
	ft_width_precision(&f1, str);
	types = *(ft_strrchr("cspdiuxX", **str));
	if (types)
	{
		f1.types = types;
		(*str)++;
	}
	f1.len = len;
	ft_args_to_str(&f1, ptr);
	len = f1.len;
	return (len);
}

void	ft_symbols(t_struct *f1, const char **str)
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

void	ft_width_precision(t_struct *f1, const char **str)
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
			f1->pre = f1->pre * 10 + **str - '0';
			(*str)++;
		}
	}
}

void	ft_args_to_str(t_struct *f1, va_list ptr)
{
	char	*str_args;
	int		strlen;

	if (f1->types == 'c')
		str_args = ft_c_to_str(va_arg(ptr, int));
	else if (f1->types == 's')
	{
		str_args = va_arg(ptr, char *);
		//printf("str_args pour s %s\n", str_args);
		if (str_args != NULL)
			str_args = ft_strcpy(str_args, ft_strlen(str_args));
		else
			str_args = ft_strcpy("(null)", 7);
	}
	else if (f1->types == 'p')
	{
		str_args = ft_address(va_arg(ptr, unsigned long));
		strlen = ft_strncmp("0x0", str_args, 4);
		if (strlen == 0)
		{
			free(str_args);
			str_args = ft_strcpy("(nil)", 6);
		}
	}
	else if (f1->types == 'd' || f1->types == 'i')
		str_args = ft_itoa(va_arg(ptr, int));
	else if (f1->types == 'u')
		str_args = ft_unsi_itoa(va_arg(ptr, unsigned int));
	else if (f1->types == 'x')
		str_args = ft_hexa(va_arg(ptr, unsigned int));
	else if (f1->types == 'X')
		str_args = ft_toupper(ft_hexa(va_arg(ptr, unsigned int)));
	if (str_args != NULL)
		f1->size = ft_strlen(str_args);
	if (f1->types == 's' && f1->pre == -1)
		f1->pre = f1->size;
	f1->len = f1->len;
	//printf("go until here .%s.\n", str_args);
	ft_putargs(f1, str_args);
}
