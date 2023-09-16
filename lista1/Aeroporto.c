#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define show(n) printf("%d\n", n);
#define entrou printf("ENTROU\n");
#define swap(c1, c2) {int c = c1; c1 = c2; c2 = c;}

void zera(int *vet, int len)
{
	for (int i = 0; i < len; i++) 
		vet[i] = 0;
}

int maiorn(int *vet, int len) 
{
	int maior;

	maior = INT_MIN;
	for (int i = 0; i < len; i++) 
		if (vet[i] > maior)
			maior = vet[i];
	return maior;
}

int main(void)
{
	int a, v;
	int s, c;
	int teste;
	int maior;
	int vet[1000];

	teste = 1;
	while (scanf("%d %d ", &a, &v), a != 0 && v != 0) {
		zera(vet, a+1);
		
		for (int k = 0; k < v; k++) {
			scanf("%d %d ", &s, &c);
			vet[s]++;
			vet[c]++;
		}

		maior = maiorn(vet, a+1);
		printf("Teste %d\n", teste);
		for  (int i = 1; i <= a; i++)
			if (vet[i] == maior)
				printf("%d ", i);
		printf("\n\n");
		teste++;
	}
	return 0;
}
