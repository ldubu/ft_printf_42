/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pre.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:03:54 by ldubuche          #+#    #+#             */
/*   Updated: 2022/02/14 14:01:35 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_pre(char *str, t_struct *f1)
{
	if (f1->pre == 0 && ft_strncmp("0", str, 2) == 0)
	{
		f1->is_zero = 1;
	}
	return (str);
}
