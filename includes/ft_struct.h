/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:02:51 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/04 11:02:51 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRUCT
# define FT_STRUCT

# ifndef HEXA
#  define HEXA ["0","1","2","3","4","5","6","7","8","9","A","B","C","D","F"]
# endif

typedef struct flags
{
	int		minus_fla;
	int		plus_fla;
	int		space_fla;
	int		diese_fla;
	int		zero_fla;

	int		width;
	int		precision;

	char	types;

	int		size;
	va_list	ptr;
} f_struct;

#endif
