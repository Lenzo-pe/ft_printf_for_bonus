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
	double d = 4456.0123444555;
	unsigned long long u = 3434239879423554421;
	i = printf("a::%#x", 1234564879116);
	printf("\n");
	printf("\n");
	z = ft_printf("a::%#x", 1234564879116);
	printf("\n");
	printf(" %d::%d ", i, z);
	return (0);
}
