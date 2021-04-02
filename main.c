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
	int i = 0;
	double d = .001;
	char *str = ft_ftoa(d, 36);
	printf("f%s", str);
	printf("\n");
	printf(" %10e ", 1.0 / 0);
	printf("\n");
	ft_printf(" %10e ", 1.0 / 0);
	ft_strdel(&str);
	return (0);
}
