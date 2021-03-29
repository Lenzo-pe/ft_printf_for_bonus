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
	d = 3.5;
	a = ft_printf("%7.5f", d);
	printf("\n");
	b = printf("%7.5f", d);

	printf("\n %d%d", a, b);
	return (0);
}
