/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:20:24 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/05 16:45:22 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_write_arg(f_struct *f1, char *str)
{
	if (f1->zero_fla == 0)
		ft_sign(f1, str);
	if (f1->diese_fla && (f1->types == 'x' || f1->types == 'X'))
	{
		ft_putstr("0x");
		f1->len = f1->len + 2;
	}
	if (f1->types != 's' && f1->pre > f1->size)
	{
		while ((f1->pre)-- > f1->size)
		{
			ft_putchar('0');
			f1->len = f1->len + 1;
		}
	}
	if (f1->types == 's' && f1->pre < f1->size)
	{
		while ((f1->pre)-- > 0)
			ft_gagner_3_lignes(f1, str);
	}
	else
	{
		while (str[f1->i])
			ft_gagner_3_lignes(f1, str);
	}
}

void	ft_gagner_3_lignes(f_struct *f1, char *str)
{
	ft_putchar(str[f1->i]);
	f1->i = f1->i + 1;
	f1->len = f1->len + 1;
}
