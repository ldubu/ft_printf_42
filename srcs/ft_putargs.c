/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:48:28 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/04 11:48:28 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_printf.h"

void	ft_putargs(t_struct *f1, char *str)
{
	int	space_nbr;

	if (f1->space_fla == 1 && f1->width == 0 && f1->types != 's' && str[0] != '-')
	{	
		ft_putchar(' ');
		f1->len = f1->len + 1;
	}
	space_nbr = ft_space_nbr(f1);
	if (f1->minus_fla == 1)
	{
		ft_write_arg(f1, str);
		ft_putspace(f1, space_nbr);
	}
	else if (f1->zero_fla == 1)
	{
		ft_putzero(f1, space_nbr - ft_sign(f1, str));
		ft_write_arg(f1, str);
	}
	else
	{
		ft_putspace(f1, space_nbr);
		ft_write_arg(f1, str);
	}
}

void	ft_putspace(t_struct *f1, int n)
{
	while (n-- > 0)
	{
		ft_putchar(' ');
		f1->len = f1->len + 1;
	}
}

int	ft_space_nbr(t_struct *f1)
{
	int	n;

	n = 0;
	//printf("width %d, pre %d, size %d\n", f1->width, f1->pre, f1->size);
	if (f1->width != 0 || f1->pre != f1->size)
	{
		if (f1->width > f1->pre)
		{
			if (f1->size >= f1->pre || (f1->size < f1->pre && f1->types == 's'))
				n = f1->width - f1->size;
			else if (f1->size < f1->pre || (f1->size > f1->pre && f1->types == 's'))
				n = f1->width - f1->pre;
		}
		else if (f1->types == 's' && f1->size > f1->width && f1->width > f1->pre)
			n = f1->width - f1->pre;
	}	
	//printf("%d\n", n);
	return (n);
}

void	ft_putzero(t_struct *f1, int n)
{
	while (n-- > 0)
	{
		ft_putchar('0');
		f1->len = f1->len + 1;
	}
}

int	ft_sign(t_struct *f1, char *str)
{
	if (str[0] == '-')
	{
		ft_putchar('-');
		f1->i = 1;
		f1->size = f1->size - 1;
		f1->len = f1->len + 1;
	}
	else if (f1->plus_fla)
	{
		ft_putchar('+');
		f1->len = f1->len + 1;
		return (1);
	}
	return (0);
}
