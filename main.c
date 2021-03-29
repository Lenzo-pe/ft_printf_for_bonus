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
	d = 1 / 1000;
	a = ft_printf("%50.16f ;", 1.0 / 100000);
	printf("\n");
	b = printf("%50.16f ;", 1.0 / 100000);

	printf("\n %d\n %d\n", a, b);
	return (0);
}
