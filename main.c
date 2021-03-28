#include "ft_printf.h"
#include <stdio.h>
#include <locale.h>
#include <unistd.h>
#include <locale.h>
#include <wchar.h>

int		main(void)
{
	int n;

	ft_printf("pipoca%n", &n);

	printf("\n");
	printf("%d", n);

	return 0;
}