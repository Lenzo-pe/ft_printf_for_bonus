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
	float d = 4789.69;
	char *str = ft_ftoa(d, 30);
	printf("%s", str);
	printf("\n%.16f\n", d);
	ft_strdel(&str);
	return (0);
}
