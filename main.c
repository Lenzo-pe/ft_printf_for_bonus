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
	a = ft_printf("%-50.15f;", -2.5567);
	printf("\n");
	b = printf("%-50.15f;", -2.5567);

	printf("\n %d%d", a, b);
	return (0);
}
