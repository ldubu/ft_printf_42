#include "includes/ft_printf.h"

int main(void)
{
	int len;
	len = ft_printf(" %% ");
	printf("\nretour ma fonction merdique %d\n", len);
	len = printf(" %% ");
	printf("\nretour la vraie fonction %d\n", len);
	return (0);
}