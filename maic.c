#include <stdio.h>

int		main(void)
{

	int c, d;
	int i;

	c = 'l';
	i = 0;
	d = 127;
	printf("\n"); printf("%65s ", "........................................................"); printf("\n");
						printf("%43s%-8s ", "NormalMode", ""); printf("\n");
	printf("%65s ", "........................................................"); printf("\n"); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%c");		i = printf("%c", c);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%3c");		i = printf("%3c", c);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%.c");		i = printf("%.c", c);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%.3c");	i = printf("%.3c", c);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%c");		i = printf("%c", d);		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%3c");		i = printf("%3c", d);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%8c");		i = printf("%8c", d);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%.c");		i = printf("%.c", d);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%.3c");	i = printf("%.3c", d);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%.8c");	i = printf("%.8c", d);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%0c");		i = printf("%0c", c);		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%03c");	i = printf("%03c", c);		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%0.c");	i = printf("%0.c", c);		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%0.3c");	i = printf("%0.3c", c);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%0c");		i = printf("%0c", d);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%03c");	i = printf("%03c", d);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%08c");	i = printf("%08c", d);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%0.c");	i = printf("%0.c", d);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%0.3c");	i = printf("%0.3c", d);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%0.8c");	i = printf("%0.8c", d);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n"); printf("%65s ", "........................................................"); printf("\n");
						printf("%43s%-8s ", "LeftMode", ""); printf("\n");
	printf("%65s ", "........................................................"); printf("\n"); printf("\n");

	printf("%21s%5s%-8s|", "l", "", "%-c");			i = printf("%-c", c);		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%-3c");		i = printf("%-3c", c);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%-.c");		i = printf("%-.c", c);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%-.3c");		i = printf("%-.3c", c);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%-c");		i = printf("%-c", d);		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%-3c");		i = printf("%-3c", d);		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%-8c");		i = printf("%-8c", d);		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%-.c");		i = printf("%-.c", d);		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%-.3c");		i = printf("%-.3c", d);		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%-.8c");		i = printf("%-.8c", d);		printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%-0c");		i = printf("%-0c", c);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%-03c");		i = printf("%-03c", c);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%-08c");		i = printf("%-08c", c);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%-0.c");		i = printf("%-0.c", c);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%-0.3c");		i = printf("%-0.3c", c);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%-0.8c");		i = printf("%-0.8c", c);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", " 14 ", "", "%-0c");		i = printf("%-0c", d);		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", " 14 ", "", "%-03c");	i = printf("%-03c", d);		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", " 14 ", "", "%-0.c");	i = printf("%-0.c", d);		printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", " 14 ", "", "%-0.3c");	i = printf("%-0.3c", d);	printf("%s\t:%d:", "|", i); printf("\n");

	printf("\n"); printf("%65s ", "........................................................"); printf("\n");
						printf("%43s%-8s ", "MixNormalMode", ""); printf("\n");
	printf("%65s ", "........................................................"); printf("\n"); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%5.c");	i = printf("%5.c", c);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%5.3c");	i = printf("%5.3c", c);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%5.8c");	i = printf("%5.8c", c);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%5.c");	i = printf("%5.c", d);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%5.3c");	i = printf("%5.3c", d);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%5.8c");	i = printf("%5.8c", d);	printf("%s\t:%d:", "|", i); printf("\n");
printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%05.c");	i = printf("%05.c", c);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%05.3c");	i = printf("%05.3c", c);printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%05.8c");	i = printf("%05.8c", c);printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%05.c");	i = printf("%05.c", d);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%05.3c");i = printf("%05.3c", d);printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%05.8c");i = printf("%05.8c", d);printf("%s\t:%d:", "|", i); printf("\n");
printf("\n");
	printf("\n"); printf("%65s ", "........................................................"); printf("\n");
						printf("%43s%-8s ", "MixleftMode", ""); printf("\n");
	printf("%65s ", "........................................................"); printf("\n"); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%5.c");	i = printf("%-5.c", c);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%5.3c");	i = printf("%-5.3c", c);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%5.8c");	i = printf("%-5.8c", c);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%5.c");	i = printf("%-5.c", d);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%5.3c");	i = printf("%-5.3c", d);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%5.8c");	i = printf("%-5.8c", d);	printf("%s\t:%d:", "|", i); printf("\n");
printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%05.c");	i = printf("%-05.c", c);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%05.3c");	i = printf("%-05.3c", c);printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "l", "", "%05.8c");	i = printf("%-05.8c", c);printf("%s\t:%d:", "|", i); printf("\n");
	printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%05.c");	i = printf("%-05.c", d);	printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%05.3c");i = printf("%-05.3c", d);printf("%s\t:%d:", "|", i); printf("\n");
	printf("%21s%5s%-8s|", "14 ", "", "%05.8c");i = printf("%-05.8c", d);printf("%s\t:%d:", "|", i); printf("\n");

	return (0);
}
