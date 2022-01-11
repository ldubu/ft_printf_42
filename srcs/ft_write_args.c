/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:20:24 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/11 17:14:57 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_write_arg(t_struct *f1, char *str)
{
	//printf("go until write .%s.\n", str);
	if (f1->zero_fla == 0 && str != NULL)
		ft_sign(f1, str);
	//printf("go until write 1.%s.\n", str);
	if (f1->diese_fla && (f1->types == 'x' || f1->types == 'X'))
	{
		ft_putstr("0x");
		f1->len = f1->len + 2;
	}
	ft_chara(f1, str);
	//printf("go until write 2.%s.\n", str);
	if (f1->types != 's' && f1->pre > f1->size)
	{
		//printf("go until write 3.%s.\n", str);
		while ((f1->pre)-- > f1->size)
		{
			ft_putchar('0');
			//printf("str+pre\n");
			f1->len = f1->len + 1;
		}
	}
	else if (f1->types == 's' && f1->pre < f1->size)
	{
		//printf("go until write 4.%s.\n", str);
		while ((f1->pre)-- > 0)
			ft_gagner_3_lignes(f1, str);
	}
	else
	{
		//printf("enter else 5.%s.\n", str);
		while (str[f1->i])
			ft_gagner_3_lignes(f1, str);
	}
	if (str != NULL)
		free(str);
}

void	ft_gagner_3_lignes(t_struct *f1, char *str)
{
	//printf("3\n");
	ft_putchar(str[f1->i]);
	f1->i = f1->i + 1;
	f1->len = f1->len + 1;
}

void	ft_chara(t_struct *f1, char *str)
{
	if (f1->types == 'c' && str[0] == 0)
	{
		ft_putchar('\0');
		f1->len = f1->len + 1;
	}
}
