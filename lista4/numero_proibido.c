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

void merge(int *v, int l, int m, int r)
{
	int i, j, k;
	int *aux;
	
	aux = malloc(sizeof(int)*(r + 1 - l));
	k = 0;
	for (i = l, j = m + 1; i <= m && j <= r; )
		aux[k++] = v[i] <= v[j] ? v[i++] : v[j++];

	while (i <= m)
		aux[k++] = v[i++];

	while (j <= r)
		aux[k++] = v[j++];
			
	for (int x = 0; l <= r; l++, x++)
		v[l] = aux[x];

	free(aux);
}

void merge_sort(int *v, int l, int r)
{
	int m;

	if (l >= r)
		return;

	m = l + (r - l)/2;

	merge_sort(v, l, m);
	merge_sort(v, m + 1, r);
	merge(v, l, m, r);
}

char *busca_binaria(int *v, int l, int r, int x)
{
	int m;
	
	m = l + (r - l)/2;
	
	if (v[m] == x)
		return "sim\n";
	else if (l + 1 >= r)
		return "nao\n";
	else if(v[m] > x)
		return busca_binaria(v, l, m, x);
	else
		return busca_binaria(v, m, r, x);	
}

int MAIN(void)
{
	int N, x;
	int *ps;

	scanf("%d", &N);

	ps = malloc(sizeof(int)*N);

	for (int i = 0; i < N; i++)
		scanf("%d", &ps[i]);
	
	merge_sort(ps, 0, N - 1);

	while (scanf("%d", &x) != EOF) 
		printf("%s", busca_binaria(ps, 0, N, x));

	return 0;
}
