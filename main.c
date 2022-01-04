//#include "includes/ft_printf.h"
#include <stdio.h>
int main(void)
{
	int q = 158;
	int *ptr = &q;
	//ft_printf("Bonjour %% %+# 025.1234d\n" ,57);
	printf("%25i\n", -142536);
	printf("%+5i\n", 142536);
	printf("% i\n", 142536);
	printf("%020i\n", -142536);
	printf("%10.25i\n", 142536);
	printf("%.3i\n", 142536);
	return (0);
}