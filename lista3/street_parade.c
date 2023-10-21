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

int em_ordem (int *v, int len)
{
	int i;
	for (i = 0;i < len && v[i] < v[i + 1]; i++)	
		;
	return i == len - 1? 1 : 0;
}

void le_vetor(int *vet, int len)
{
	int c;

	for (int i = 0;i < len ; i++) {
		scanf("%d", &c);
		vet[i] = c;
	}
}

void operacao(int *str, int *p, int *ordem, int len)
{
	int u, j; 

	u = j = 0;
	p[u] = INT_MAX;
	
	for (int i = 0;i < len; i++) {
		if (p[u - 1] < str[i] && u > 0) 
			ordem[j++] = p[u--];
		if (i + 1 == len)
			ordem[j++] = str[i];
		else {
			if (str[i] < str[i + 1])
				ordem[j++] = str[i];
			else 
				p[u++] = str[i];
		}
	}	
	u--;
	while (u >= 0 && j < len) 
		ordem[j++] = p[u--];
}

int MAIN(void)
{
	int *str, *ordem, *p;
	int n;


	str = malloc(sizeof(int)*1001);
	ordem = malloc(sizeof(int)*1001);
	p = malloc(sizeof(int)*1001);

	while (scanf("%d", &n), n != 0) {
		le_vetor(str, n);
		if (n == 1)
			printf("yes\n");
		else {
			operacao(str, p, ordem, n);
		
			if (em_ordem(ordem, n))
				printf("yes\n");
			else 
				printf("no\n");
		}
	}
	return 0;
}
