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

typedef struct dado_{
	int x;
	int posicao;
} dado;

void merge(dado **vet, int l, int media, int r)
{
	dado **aux;
	int x, i, j;

	aux = malloc(sizeof(dado) * (r + 1 - l));
	x = 0;
	i = l;
	j = media + 1;
	while (i <= media && j <= r)
		aux[x++] = vet[i]->x <= vet[j]->x ? vet[i++] : vet[j++];
	while (i <= media)
		aux[x++] = vet[i++];
	while (j <= r)
		aux[x++] = vet[j++];

	x = 0;
	for (i = l; i <= r; i++)
		vet[i] = aux[x++];

	free(aux);
}

void merge_sort(dado **vet, int l, int r)
{
	int media;

	if (l >= r)
		return;

	media = l + (r - l)/2;
	merge_sort (vet, l, media);
	merge_sort (vet, media + 1, r);
	merge (vet, l, media, r);
}

int busca_binaria(dado **v, int l, int r, int x)
{
	int m;

	m = l + (r - l)/2;

	if (v[m]->x == x)
		return v[m]->posicao;
	else if (l + 1 >= r)
		return -1;
	else if(v[m]->x > x)
		return busca_binaria(v, l, m, x);
	else
		return busca_binaria(v, m, r, x);
}

int MAIN(void)
{
	int N, M, x, n;
	int *ns, *ms;
	dado **lista;

	scanf("%d %d", &N, &M);
	
	lista = malloc(sizeof(dado)*N);
	ns = malloc(sizeof(int)*N);
	ms = malloc(sizeof(int)*M);

	for (int i = 0; i < N; i++) {
		scanf("%d", &n);
		lista[i] = malloc(sizeof(dado));
		lista[i]->x = n;
		lista[i]->posicao = i;
	}
	
	merge_sort(lista, 0, N - 1);
	
	for (int i = 0; i < M; i++) {
		scanf("%d", &x);
		printf("%d\n", busca_binaria(lista, 1, N - 1, x));
	}
	return 0;
}
