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

void bubble_sort(int *vet, int l, int r)
{
	for (; r > l; r--) {
		for (int i = l; i < r-1; i++) {
			if (vet[i] > vet[i + 1])
				swap(vet[i], vet[i + 1])
		}
	}
}
int MAIN(void)
{
	int *vet;
	int len;

	vet = malloc(sizeof(int)*1001);
	for (len = 0; scanf("%d ", &vet[len]) != EOF; len++)
		;

	bubble_sort(vet, 0, len);

	for (int i = 0; i < len; i++) 
		printf("%d%c", vet[i], i + 1 == len ? '\n' : ' ');

	return 0;
}
