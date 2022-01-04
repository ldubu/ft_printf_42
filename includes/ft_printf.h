/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:02:41 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/04 11:02:41 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include "ft_struct.h"

int	ft_flags(va_list ptr,const char **str,int len);
int	ft_printf(const char *str, ...);
char	*ft_strrchr(const char *s, int c);
void ft_symbols(f_struct *f1, const char **str);
void	ft_width_precision(f_struct *f1, const char **str);
void ft_putstr(char *s);
void ft_putchar(char c);
int	ft_toupper(int c);

char	*ft_c_to_str(char c);


#endif