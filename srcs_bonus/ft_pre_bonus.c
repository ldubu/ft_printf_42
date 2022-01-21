/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pre_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:03:54 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/21 12:39:04 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes_bonus/ft_printf_bonus.h"

char	*ft_pre(char *str, t_struct *f1)
{
	if (f1->pre == 0 && ft_strncmp("0", str, 2) == 0)
	{
		f1->is_zero = 1;
	}
	return (str);
}
