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

typedef struct dic{
	char jap[100];
	char trad[100];
} dic;

void merge(dic *v, int l, int m, int r)
{
	int i, j, k;
	dic *aux;

	aux = malloc(sizeof(dic)*(r + 1 - l));
	k = 0;
	for (i = l, j = m + 1; i <= m && j <= r; )
		aux[k++] = strcmp(v[i].jap, v[j].jap) < 0 ? v[i++] : v[j++];

	while (i <= m)
		aux[k++] = v[i++];

	while (j <= r)
		aux[k++] = v[j++];

	for (int x = 0; l <= r; l++, x++)
		v[l] = aux[x];

	free(aux);
}

void merge_sort(dic *v, int l, int r)
{
	int m;

	if (l >= r)
		return;

	m = l + (r - l)/2;

	merge_sort(v, l, m);
	merge_sort(v, m + 1, r);
	merge(v, l, m, r);
}

char *busca_binaria(dic *v, int l, int r, char *x)
{
	int m;

	m = l + (r - l)/2;

	if (strcmp(v[m].jap, x) == 0)
		return v[m].trad;
	else if (l + 1 >= r)
		return x;
	else if(strcmp(v[m].jap, x) > 0)
		return busca_binaria(v, l, m, x);
	else
		return busca_binaria(v, m, r, x);
}

int MAIN(void)
{
	int inst, M, N;
	char c;
	char aux[100];
	char text[100];
	dic *lista;

	c = 0;
	lista = malloc(sizeof(dic)*1000001);
	scanf("%d", &inst);
	for (int i = 0; i < inst; i++) {
		scanf("%d %d ", &M, &N);
		for (int j = 0; j < M; j++) {
			scanf("%[^\n]\n", lista[j].jap);
			scanf("%[^\n]\n", lista[j].trad);
		}

		merge_sort(lista, 0, M - 1);

		for (int j = 0; j < N; j++) {
			while (c != '\n') {
				scanf("%s", text);
				c = getchar();		
				printf("%s", busca_binaria(lista, 0, M, text));
				printf("%c", c);
			}
			c = 0;
		}
	}
	return 0;
}
