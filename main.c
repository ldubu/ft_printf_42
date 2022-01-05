#include "includes/ft_printf.h"

int main(void)
{
	int q = 158;
	int *ptr = &q;
	ft_printf("Bonjour %%\n");
	ft_printf("%i\n", 142536);
	ft_printf("%s\n", "hello");
	ft_printf("%c\n", 'j');
	ft_printf("%x\n", 956);
	ft_printf("%p\n", ptr);
	printf("%+025i\n", NULL);
	printf("%25i\n", -52);
	return (0);
}