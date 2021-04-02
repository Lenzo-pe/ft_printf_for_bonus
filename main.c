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
	int i, z;
	double d = 42.0;
	char *str = ft_ftoa(d, 2);
	printf("f%s", str);
	printf("\n");
	i = printf("p%-9.2e ", 42.0);
	printf("\n");
	z = ft_printf("f%-9.2e ", 42.0);
	printf("\n%d::%d\n", z, i);
	ft_strdel(&str);
	return (0);
}
