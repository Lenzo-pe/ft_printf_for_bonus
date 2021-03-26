#include "ft_printf.h"
#include <stdio.h>


int		main(void)
{
	printf("%-03.d ", 0);
	printf("\n");
	ft_printf("%-03.d ", 0);
	return (0);
}