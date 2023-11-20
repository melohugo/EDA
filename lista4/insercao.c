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
	int key, j;
	for (int i = l + 1; i < r; i++) {
		key = vet[i];

		j = i - 1;
		while (j >= l && vet[j] > key) {
			vet[j + 1] = vet[j];	
			j--;
		}
		vet[j + 1] = key;
	}
}

int MAIN(void)
{
	int vet[50001];
	int len;

	for (len = 0; scanf("%d ", &vet[len]) != EOF; len++)
		;

	insertion_sort(vet, 0, len);

	for (int i = 0; i < len; i++) 
		printf("%d%c", vet[i], i + 1 == len ? '\n' : ' ');

	return 0;
}
