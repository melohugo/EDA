#include <stdio.h>
#include <limits.h>
//#include <string.h>
#include <ctype.h>
#include <math.h>
#define show(n) printf("%c\n", n);
#define entrou printf("ENTROU\n");
#define swap(c1, c2) {int c = c1; c1 = c2; c2 = c;}
#define MAIN main


void pares(char *str, int *quant)
{
	if (str[2] != '\0') {
		if (str[0] == str[2])
			(*quant)++;

		pares(&str[1], quant);
	}
}

int MAIN(void)
{
	char str[210] = {0};
	int quant;

	quant = 0;
	scanf("%s", str);

	pares(str, &quant);
	printf("%d\n", quant);
	return 0;
}
