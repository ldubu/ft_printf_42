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
#include "../includes/ft_print.h"

int	ft_width(va_list ptr, char *str, int len, f_struct f1)
{
	char *retour;

	retour = NULL;
	if ((f1.types == 's' && f1.precision > f1.size)
}