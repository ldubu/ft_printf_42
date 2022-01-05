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

#ifndef FT_PRINTF_h
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include "ft_struct.h"

int		ft_flags(va_list ptr,const char **str,int len);
int		ft_printf(const char *str, ...);
char	*ft_strrchr(const char *s, int c);
void	 ft_symbols(f_struct *f1, const char **str);
void	ft_width_precision(f_struct *f1, const char **str);
void 	ft_putstr(char *s);
void	 ft_putchar(char c);
char	*ft_toupper(char *s);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const*s2);
char	*ft_c_to_str(char c);
char	*ft_address(unsigned long);
char	*ft_freestr(char *temp, char *temp2);
char	*ft_itoa(int n);
char	*ft_unsi_itoa(int n);
char	*ft_hexa(unsigned int n);
size_t	ft_strlen(const char *s);
void	ft_args_to_str(f_struct *f1, va_list ptr);
void	ft_ini_struct(f_struct *f1);
char	*ft_null(void);
void	ft_write_arg(f_struct *f1, char *str);
void	ft_gagner_3_lignes(f_struct *f1, char *str);
void	ft_putargs(f_struct *f1, char *str);
void	ft_putspace(f_struct *f1, int n);
int		ft_space_nbr(f_struct *f1);
void	ft_putzero(f_struct *f1, int n);
void	ft_sign(f_struct *f1, char *str);


#endif