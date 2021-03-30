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
	float	i;
	int a, b;
	d = 0.0 / 0;
	i = 0.0 / 0;
	if (d == i)
	{
		printf("NAN");
		return (0);
	}
	a = ft_printf(" %10f ", d);
	printf("\n");
	b = printf(" %10f ", d);

	printf("\n %d\n %d\n", a, b);
	setlocale(LC_ALL, "");
	printf("%lc", L'\u03C2');

	return (0);
}
