#include "../includes/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		len;

	len = 0;
	va_start(ptr, str);
	
	while (*str)
	{
		if (*str == '%')
			ft_flags(ptr, ++str);
		ft_putchar(*str++);
		len++;
	}
	va_end(ptr);
	return(len);	
}