#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int i;
	i = 0;
	printf("\n"); printf("%65s ", "........................................................"); printf("\n");
						printf("%43s%-8s ", "NormalMode", ""); printf("\n");
	printf("%65s ", "........................................................"); printf("\n"); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%s");			i = printf("%s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%3s");			i = printf("%3s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%8s");			i = printf("%8s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%.s");			i = printf("%.s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%.2s");			i = printf("%.2s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%.8s");			i = printf("%.8s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%s");			i = printf("%s", NULL);		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%3s");			i = printf("%3s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%8s");			i = printf("%8s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%.s");			i = printf("%.s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%.2s");			i = printf("%.2s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%.8s");			i = printf("%.8s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%0s");			i = printf("%0s", "Hell");		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%03s");			i = printf("%03s", "Hell");		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%08s");			i = printf("%08s", "Hell");		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%0.s");			i = printf("%0.s", "Hell");		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%0.2s");		i = printf("%0.2s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%0.8s");		i = printf("%0.8s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%0s");			i = printf("%0s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%03s");			i = printf("%03s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%08s");			i = printf("%08s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%0.s");			i = printf("%0.s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%0.2s");		i = printf("%0.2s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%0.8s");		i = printf("%0.8s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");

	printf("\n"); printf("%65s ", "........................................................"); printf("\n");
						printf("%43s%-8s ", "LeftMode", ""); printf("\n");
	printf("%65s ", "........................................................"); printf("\n"); printf("\n");

	printf("%21s%5s%-8s|", "hell", "", "%-s");			i = printf("%-s", "Hell");		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%-3s");			i = printf("%-3s", "Hell");		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%-8s");			i = printf("%-8s", "Hell");		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%-.s");			i = printf("%-.s", "Hell");		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%-.2s");		i = printf("%-.2s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%-.8s");		i = printf("%-.8s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%-s");			i = printf("%-s", NULL);		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%-3s");			i = printf("%-3s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%-8s");			i = printf("%-8s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%-.s");			i = printf("%-.s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%-.2s");		i = printf("%-.2s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%-.8s");		i = printf("%-.8s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%-0s");			i = printf("%-0s", "Hell");		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%-03s");		i = printf("%-03s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%-08s");		i = printf("%-08s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%-0.s");		i = printf("%-0.s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%-0.2s");		i = printf("%-0.2s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%-0.8s");		i = printf("%-0.8s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%-0s");			i = printf("%-0s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%-03s");		i = printf("%-03s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%-08s");		i = printf("%-08s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%-0.s");		i = printf("%-0.s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%-0.2s");		i = printf("%-0.2s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%-0.8s");		i = printf("%-0.8s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");

	printf("\n"); printf("%65s ", "........................................................"); printf("\n");
						printf("%43s%-8s ", "MixNormalMode", ""); printf("\n");
	printf("%65s ", "........................................................"); printf("\n"); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%3.2s");		i = printf("%3.2s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%10.3s");		i = printf("%10.3s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%10.s");		i = printf("%10.s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%10.7s");		i = printf("%10.7s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%3.10s");		i = printf("%3.10s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%7.10s");		i = printf("%7.10s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%3.2s");		i = printf("%3.2s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%10.3s");		i = printf("%10.3s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%10.s");		i = printf("%10.s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%10.7s");		i = printf("%10.7s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%3.10s");		i = printf("%3.10s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%7.10s");		i = printf("%7.10s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%03.2s");		i = printf("%03.2s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%010.3s");		i = printf("%010.3s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%010.s");		i = printf("%010.s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%010.7s");		i = printf("%010.7s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%03.10s");		i = printf("%03.10s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%07.10s");		i = printf("%07.10s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%03.2s");		i = printf("%03.2s", NULL);		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%010.3s");		i = printf("%010.3s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%010.s");		i = printf("%010.s", NULL);		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%010.7s");		i = printf("%010.7s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%03.10s");		i = printf("%03.10s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%07.10s");		i = printf("%07.10s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");



	printf("\n"); printf("%65s ", "........................................................"); printf("\n");
						printf("%43s%-8s ", "NormalMode", ""); printf("\n");
	printf("%65s ", "........................................................"); printf("\n"); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%d");			i = printf("%d", 4224);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%3d");			i = printf("%3d", 4224);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%8d");			i = printf("%8d", 4224);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%.d");			i = printf("%.d", 4224);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%.2d");			i = printf("%.2d", 4224);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%.8d");			i = printf("%.8d", 4224);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%s");			i = printf("%s", NULL);		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%3s");			i = printf("%3s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%8s");			i = printf("%8s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%.s");			i = printf("%.s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%.2s");			i = printf("%.2s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%.8s");			i = printf("%.8s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%0s");			i = printf("%0s", "Hell");		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%03s");			i = printf("%03s", "Hell");		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%08s");			i = printf("%08s", "Hell");		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%0.s");			i = printf("%0.s", "Hell");		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%0.2s");		i = printf("%0.2s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "hell", "", "%0.8s");		i = printf("%0.8s", "Hell");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%0s");			i = printf("%0s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%03s");			i = printf("%03s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%08s");			i = printf("%08s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%0.s");			i = printf("%0.s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%0.2s");		i = printf("%0.2s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "NULL", "", "%0.8s");		i = printf("%0.8s", NULL);	printf("%s\t:%d:", "|", i); printf("\n");


	// printf("-->|%-16.p|<-- ", NULL);
	// printf("\n");
	// ft_printf("-->|%-16.p|<-- ", NULL);
	// printf("\n");
	return (0);
}
