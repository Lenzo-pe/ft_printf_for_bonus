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
	char *str;

	double n;

	n = 3.4489923498;
	str = ft_ftoa(n, 9);
	printf("%s", str);
	printf("\n");
	printf("%.15f", n);
	ft_strdel(&str);
	return (0);
}
