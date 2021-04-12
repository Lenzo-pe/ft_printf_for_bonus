#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	int a, b, c;

	a = 19;
	b = 14;
	c = 123456789;
	// printf("\none\n");
	// int i = printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d", a, b, -42, a, b, 42, -a, -b, -42, -a, -b, 42, -a, b, -42, -a, b, 42, a, -b, -42, a, -b, 42);

	// printf("\none\n");
	// int d = ft_printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d", a, b, -42, a, b, 42, -a, -b, -42, -a, -b, 42, -a, b, -42, -a, b, 42, a, -b, -42, a, -b, 42);
	int d =    printf(":%*.*u:", 0, 0, 0);
	printf("\n");
	int i = ft_printf(":%*.*u:", 0, 0, 0);
	printf("\n");
	printf("%d::%d", d, i);
	printf("\n");
	return (0);
}
