#include "ft_printf.h"
#include <stdio.h>


int		main(void)
{
	printf("% .d", 5);
	printf("\n");
	ft_printf("% .d", 5);
	return (0);
}