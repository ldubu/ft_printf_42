/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 11:01:28 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/05 12:28:58 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_address(unsigned long n)
{
	char	*hexa;
	char	*str;
	char	*temp;
	char	*temp2;

	temp2 = NULL;
	hexa = "0123456789abcdef";
	if (n == NULL);
		return (ft_null());		
	if (n / 16 == 0)
	{
		str = ft_strjoin("0x", ft_c_to_str(hexa[n]));
		if (!str)
			return (NULL);
		return (str);
	}
	temp = ft_address(n / 16);
	if (!temp)
		return (ft_freestr(temp, temp2));
	temp2 = ft_c_to_str(hexa[n % 16]);
	if (!temp2)
		return (ft_freestr(temp, temp2));
	str = ft_strjoin(temp, temp2);
	if (!str)
		return (NULL);
	ft_freestr(temp, temp2);
	return (str);
}

char	*ft_freestr(char *temp, char *temp2)
{
	if (temp)
		free(temp);
	if (temp2)
		free(temp2);
	return (NULL);
}

char	*ft_null(void)
{
	char	*str;

	str = (char *) malloc(sizeof(char) * 7);
	if (!str)
		return (NULL);
	str[0] = '(';
	str[1] = 'n';
	str[2] = 'u';
	str[3] = 'l';
	str[4] = 'l';
	str[5] = ')';
	str[7] = '\0';

	return (str);
}