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

void merge(int *vet, int l, int media, int r) 
{
	int *aux;
	int x, i, j;

	aux = malloc(sizeof(int) * (r + 1 - l));
	x = 0;
	i = l;
	j = media + 1;

	while (i <= media && j <= r) 
		aux[x++] = vet[i] <= vet[j] ? vet[i++] : vet[j++];

	while (i <= media)
		aux[x++] = vet[i++];

	while (j <= r)
		aux[x++] = vet[j++];

	x = 0;
	for (i = l; i <= r; i++) 
		vet[i] = aux[x++];

	free(aux);
}

void merge_sort(int *vet, int l, int r)
{
	int media;

	if (l >= r)
		return;

	media = l + (r - l)/2;
	merge_sort (vet, l, media);
	merge_sort (vet, media + 1, r);
	merge (vet, l, media, r);
}

int MAIN(void)
{
	int *vet;
	int len, n;
	
	scanf("%d", &n);

	vet = malloc(sizeof(int)*n);
	for (len = 0; scanf("%d ", &vet[len]) != EOF; len++)
		;

	merge_sort(vet, 0, len);

	for (int i = 0; i < len; i++) 
		printf("%d%c", vet[i], i + 1 == n ? '\n' : ' ');

	return 0;
}
