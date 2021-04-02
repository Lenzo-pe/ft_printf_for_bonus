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
	double d = .001;
	char *str = ft_ftoa(d, 36);
	printf("f%s", str);
	printf("\n");
	i = printf("-.16e ", 1.0 / 1000);
	printf("\n");
	z = ft_printf("-.16e ", 1.0 / 1000);
	printf("\n%d::%d\n", d, i);
	ft_strdel(&str);
	return (0);
}
