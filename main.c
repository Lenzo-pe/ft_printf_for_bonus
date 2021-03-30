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
	float	d;
	int a, b;
	d = 1.0 / 0;
	a = ft_printf(" %10f ", 1.0 / 0);
	printf("\n");
	b = printf(" %10f ", 1.0 / 0);

	printf("\n %d\n %d\n", a, b);
	setlocale(LC_ALL, "");
	printf("%lc", L'\u03C2');

	return (0);
}
