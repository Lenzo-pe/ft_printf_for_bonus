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
	double d = 4.1;
	char *str = ft_ftoa(d, 20);
	printf("f%s", str);
	printf("\np%.20f\n", d);
	ft_printf("\nf%.20f\n", d);
	ft_strdel(&str);
	return (0);
}
