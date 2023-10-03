#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define show(n) printf("%d\n", n);
#define entrou printf("ENTROU\n");
#define swap(c1, c2) {int c = c1; c1 = c2; c2 = c;}
#define MAIN main

int rumo(char *str, int soma)
{
	int c;

	if (c = getchar(), c != '\n') {
		soma += (c - '0');	
		*str = c;
		rumo(++str, soma);
	}
	else {
	
		*str = '\0';
	
		if (str[0] == '0' && str[1] == '\0')
			return -1;
		else
			return soma;
	}
}

void grau_9(int soma, int *grau)
{
	if (soma > 0) {
		(*grau)++;
		grau_9(soma /= 10, grau);
	}
}

void leitura(char *str)
{
	int grau, soma;

	grau = 0;
	soma = rumo(str, 0);
	if (soma > 0) {
		if (soma % 9 == 0) {
			grau_9(soma, &grau);	
			printf("%s is a multiple of 9 and has 9-degree %d.\n", str, grau);
		}
		else
			printf("%s is not a multiple of 9.\n", str);

		leitura(str);
	}
}

int MAIN(void)
{
	char str[1001];

	leitura(str);
	return 0;
}
