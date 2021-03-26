#include "ft_printf.h"
#include <stdio.h>


int		main(void)
{
	printf("%lc ", 'd');
	printf("\n");
	ft_printf("%lc ", 'd');
	return (0);
}