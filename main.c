#include "ft_printf.h"
#include <stdio.h>
#include <locale.h>
#include <unistd.h>
#include <locale.h>
#include <wchar.h>
#include <math.h>
#include <stddef.h>
#include <string.h>

int		main(void)
{
	int a, b;
	double	d;

	d = 0.000010;

	a = printf("%e", d);
	printf("\n");
	b = ft_printf("%e", d);
	printf("\n%d::%d", a, b);
	return (0);
}
