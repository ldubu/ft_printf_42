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

int	ft_width(f_struct *f1, char *str)
{
	char *retour;
	
	retour = NULL;


}

void	ft_putspace(f_struct *f1, int n)
{
	while (n-- > 0)
	{
		ft_putchar(' ');
		f1->len = f1->len + 1;
	}
}

int	ft_space_nbr(f_struct *f1)
{
	int	n;

	n = 0;
	if (f1->types == 's' && f1->size > f1->pre && f1->width > f1->pre)
		n = f1->width - f1->pre;
	else if ()
}