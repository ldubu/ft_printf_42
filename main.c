#include "includes/ft_printf.h"

int main(void)
{
	int len;
	len = ft_printf(" NULL %s NULL ", NULL);
	printf("\nretour ma fonction merdique %d\n", len);
	len = printf(" NULL %s NULL ", (char *) NULL);
	printf("\nretour la vraie fonction %d\n", len);
	return (0);
}