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

	d  = 1.0 / 0;
	a = ft_printf(" %.e", 44444.4);
	printf("\n");
	b = printf(" %.e", 44444.4);

	printf("\n %d\n %d\n", a, b);
	return (0);
}
