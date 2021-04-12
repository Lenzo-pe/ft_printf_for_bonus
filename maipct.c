#include <stdio.h>

int		main(void)
{

	int i;

	i = 0;
	printf("\n"); printf("%65s ", "........................................................"); printf("\n");
						printf("%43s%-8s ", "NormalMode", ""); printf("\n");
	printf("%65s ", "........................................................"); printf("\n"); printf("\n");
	printf("%21s%5s%-8s|", "%%", "", "%%");		i = printf("%%");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "%%", "", "%3%");	i = printf("%3%");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "%%", "", "%.%");	i = printf("%.%");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "%%", "", "%.3%");	i = printf("%.3%");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "%%", "", "%0%");	i = printf("%0%");		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "%%", "", "%03%");	i = printf("%03%");		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "%%", "", "%0.%");	i = printf("%0.%");		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "%%", "", "%0.3%");	i = printf("%0.3%");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("\n"); printf("%65s ", "........................................................"); printf("\n");
						printf("%43s%-8s ", "LeftMode", ""); printf("\n");
	printf("%65s ", "........................................................"); printf("\n"); printf("\n");

	printf("%21s%5s%-8s|", "%%", "", "%-%");		i = printf("%-%");		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "%%", "", "%-3%");		i = printf("%-3%");		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "%%", "", "%-.%");		i = printf("%-.%");		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "%%", "", "%-.3%");		i = printf("%-.3%");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", " %% ", "", "%-0%");		i = printf("%-0%");		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", " %% ", "", "%-03%");	i = printf("%-03%");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", " %% ", "", "%-0.%");	i = printf("%-0.%");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", " %% ", "", "%-0.3%");	i = printf("%-0.3%");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("\n"); printf("%65s ", "........................................................"); printf("\n");
						printf("%43s%-8s ", "MixNormalMode", ""); printf("\n");
	printf("%65s ", "........................................................"); printf("\n"); printf("\n");
	printf("%21s%5s%-8s|", "%%", "", "%5.%");	i = printf("%5.%");		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "%%", "", "%5.3%");	i = printf("%5.3%");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "%%", "", "%5.8%");	i = printf("%5.8%");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "%% ", "", "%5.%");	i = printf("%5.%");		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "%% ", "", "%5.3%");	i = printf("%5.3%");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "%% ", "", "%5.8%");	i = printf("%5.8%");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "%%", "", "%05.%");	i = printf("%05.%");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "%%", "", "%05.3%");	i = printf("%05.3%");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "%%", "", "%05.8%");	i = printf("%05.8%");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("\n"); printf("%65s ", "........................................................"); printf("\n");
						printf("%43s%-8s ", "MixleftMode", ""); printf("\n");
	printf("%65s ", "........................................................"); printf("\n"); printf("\n");
	printf("%21s%5s%-8s|", "%%", "", "%5.%");	i = printf("%-5.%");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "%%", "", "%5.3%");	i = printf("%-5.3%");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "%%", "", "%5.8%");	i = printf("%-5.8%");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "%%", "", "%05.%");	i = printf("%-05.%");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "%%", "", "%05.3%");	i = printf("%-05.3%");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "%%", "", "%05.8%");	i = printf("%-05.8%");	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	return (0);
}
