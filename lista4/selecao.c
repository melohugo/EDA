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

void selection_sort(int *vet, int l, int r)
{
	int menor;
	for (int i = l; i < r; i++) {
		menor = i;

		for (int j = i + 1; j < r; j++) {
			if (vet[j] < vet[menor])
				menor = j;
		}	
		if (i != menor)
			swap(vet[menor], vet[i]);
	}
}
int MAIN(void)
{
	int *vet;
	int len;

	vet = malloc(sizeof(int)*1001);
	for (len = 0; scanf("%d ", &vet[len]) != EOF; len++)
		;

	selection_sort(vet, 0, len);

	for (int i = 0; i < len; i++) 
		printf("%d%c", vet[i], i + 1 == len ? '\n' : ' ');

	return 0;
}
