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

typedef struct instrucoes{
	int cod;
	char nome[30];
} inst;


void merge(inst **v, int l, int m, int r)
{
	int i, j, k;
	inst **aux;
	
	aux = malloc(sizeof(inst)*(r + 1 - l));
	k = 0;
	for (i = l, j = m + 1; i <= m && j <= r; )
		aux[k++] = v[i]->cod <= v[j]->cod ? v[i++] : v[j++];

	while (i <= m)
		aux[k++] = v[i++];

	while (j <= r)
		aux[k++] = v[j++];
			
	for (int x = 0; l <= r; l++, x++)
		v[l] = aux[x];

	free(aux);
}

void merge_sort(inst **v, int l, int r)
{
	int m;

	if (l >= r)
		return;

	m = l + (r - l)/2;

	merge_sort(v, l, m);
	merge_sort(v, m + 1, r);
	merge(v, l, m, r);
}

char *busca_binaria(inst **v, int l, int r, int x)
{
	int m;
	
	m = l + (r - l)/2;
	
	if (v[m]->cod == x)
		return v[m]->nome;
	else if (l + 1 >= r)
		return "undefined";
	else if(v[m]->cod > x)
		return busca_binaria(v, l, m, x);
	else
		return busca_binaria(v, m, r, x);	
}

int MAIN(void)
{
	int N, x, n, nome;
	inst **comandos;

	scanf("%d", &N);	

	comandos = malloc(sizeof(inst)*N);

	for (int i = 0; i < N; i++) {
		comandos[i] = malloc(sizeof(inst));
		scanf("%d %s", &comandos[i]->cod, comandos[i]->nome);
	}

	merge_sort(comandos, 0, N - 1);

	while (scanf("%d", &x) != EOF) 
		printf("%s\n", busca_binaria(comandos, 0, N, x));

	return 0;
}
