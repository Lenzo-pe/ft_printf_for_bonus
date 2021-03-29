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

	d = 3.5;
	ft_printf("%7.5f", d);
	printf("\n");
	printf("%7.5f", d);
	return (0);
}
