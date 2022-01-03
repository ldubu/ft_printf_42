#include "../includes/ft_printf.h"

int	ft_flags(ptr, str, len)
{
	char		types;
	f_struct	f1;
	if (*str == '%')
	{
		ft_putchar('%');
		return (++len);
	}
	while (ft_strrchr("-+0# ", *str) != NULL)
	{
		if (*str == '-')
			f1.minus_flag = 1;
		else if (*str == '+')
			f1.plus_flag = 1;
		else if (*str == ' ')
			f1.space_flag = 1;
		else if (*str == '0')
			f1.zero_flag = 1;
		else if (*str == '#')
			f1.diese_flag = 1;
		str++;
	}
	f1.width = 0;
	while (ft_strrchr("0123456789", *str) != NULL)
	{
		f1.width = f1.width * 10 + *str - '0';
		str++;
	}
	if (*str == '.')
	{
		str++;
		f1.precision = 0;
		while (ft_strrchr("0123456789", *str) != NULL)
		{
			f1.precision = f1.precision * 10 + *str - '0';
			str++;
		}
	}
	types = *(ft_strrchr("cspdiuxX", str));
	if (types)
		f1.types = types;
	return (len)
}