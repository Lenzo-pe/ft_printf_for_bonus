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
	a = ft_printf("%20.4f", d);
	printf("\n");
	b = printf("%20.4f", d);

	printf("\n %d\n %d\n", a, b);
	return (0);
}
