#ifndef FT_PRINTF
# define FT_PRINTF

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include "ft_struct.h"

int	ft_printf(const char *str, ...);
void ft_putstr(char *s);
void ft_putchar(char c);

#endif