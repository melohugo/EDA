#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#define show(n) printf("%d\n", n);
#define entrou printf("ENTROU\n");
#define swap(c1, c2) {int c = c1; c1 = c2; c2 = c;}
#define MAIN main

void itoa(int n, int *str)
{
	for (;n > 0; str++, n /= 10)
		*str = n % 10;

	*str = '\0';
}

int rumo(int *str, int grau) 
{
	int soma;	
	int str_rec[10];

	for (soma = 0;*str != '\0'; str++) 
		soma += *str;
	
	if (soma > 10 && soma % 9 == 0) {
		itoa(soma, str_rec);
		rumo(str_rec, ++grau);	
	}
	else 
		return soma % 9 == 0 ? grau : -1;
}

int leitura(int *str)
{
	int i, c;

	for (i = 0; c = getchar(), c != '\n'; i++) 
		str[i] = c - '0';

	str[i] = '\0';

	if (str[0] == 0 && str[1] == '\0') 
		return 0;
	else 
		return 1;
}

void mostra(int *str) 
{
	while (*str != '\0') {
		printf("%d", *str);
		str++;
	}
}

int MAIN(void)
{
	int *str = malloc(sizeof(int)*10000);
	int grau;

	while (leitura(str) != 0) {
		if ((grau = rumo(str, 1)), grau > 0) {
			mostra(str);
			printf(" is a multiple of 9 and has 9-degree %d.\n", grau);
		}
		else {
			mostra(str);
			printf(" is not a multiple of 9.\n");	
		}
	}
	return 0;
}
