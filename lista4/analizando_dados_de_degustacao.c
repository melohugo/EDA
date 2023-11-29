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

typedef struct dado_ {
	int tamanho;
	char caracter;
	int inicio;
} dado;

void merge(dado *vet, int l, int media, int r)
{
	dado *aux;
	int x, i, j;

	aux = malloc(sizeof(dado) * (r + 1 - l));
	x = 0;
	i = l;
	j = media + 1;

	while (i <= media && j <= r)
		aux[x++] = vet[i].tamanho >= vet[j].tamanho ? vet[i++] : vet[j++];

	while (i <= media)
		aux[x++] = vet[i++];

	while (j <= r)
		aux[x++] = vet[j++];

	x = 0;
	for (i = l; i <= r; i++)
		vet[i] = aux[x++];

	free(aux);
}

void merge_sort(dado *vet, int l, int r)
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
	char info[100001];
	int i, p;
	dado *vet;
	
	vet = malloc(sizeof(dado)*100001);
	i = 0;
	p = 0;
	scanf("%s", info);
	
	
	vet[i].tamanho = 1;
	vet[i].caracter = info[0];
	vet[i].inicio = 0;
	while (info[p++] != '\0') {
		if (info[p - 1] != info[p]) {
			i++;
			vet[i].tamanho = 1;
			vet[i].caracter = info[p];
			vet[i].inicio = p;
		}
		else
			vet[i].tamanho += 1;
	}
	merge_sort(vet, 0, i - 1);

	for (int j = 0; j < i; j++) 
		printf("%d %c %d\n", vet[j].tamanho, vet[j].caracter, vet[j].inicio);

	return 0;
}
