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

void insertion_sort(int *vet, int l, int r)
{
	for (int i = l; i < r; i++)
		for (int j = i; j > l && vet[j] < vet[j - 1]; j--)
			swap(vet[j], vet[j - 1])
}

int MAIN(void)
{
	int *vet;
	int len;

	vet = malloc(sizeof(int)*50001);
	for (len = 0; scanf("%d ", &vet[len]) != EOF; len++)
		;

	insertion_sort(vet, 0, len);

	for (int i = 0; i < len; i++) 
		printf("%d%c", vet[i], i + 1 == len ? '\n' : ' ');

	return 0;
}
