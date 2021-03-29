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
	double	d;
	int a, b;
	d = -42;
	a = ft_printf(" %f %f ;", 42.0, 42.0);
	printf("\n");
	b = printf(" %f %f ;", 42.0, 42.0);

	printf("\n %d\n %d\n", a, b);
	return (0);
}
