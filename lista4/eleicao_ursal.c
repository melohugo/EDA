#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#define show(n) printf("%d\n", n);
#define entrou printf("ENTROU\n");
#define swap(c1, c2) {int c = c1; c1 = c2; c2 = c;}

typedef struct dado{
	int numero;
	int votos;
} dado;

void merge(dado *v, int l, int m, int r)
{
	int i, j, k;
	dado *aux;

	aux = malloc(sizeof(dado)*(r + 1 - l));
	k = 0;
	for (i = l, j = m + 1; i <= m && j <= r; )
		aux[k++] = v[i].votos <= v[j].votos ? v[i++] : v[j++];

	while (i <= m)
		aux[k++] = v[i++];

	while (j <= r)
		aux[k++] = v[j++];

	for (int x = 0; l <= r; l++, x++)
		v[l] = aux[x];

	free(aux);
}

void merge_sort(dado *v, int l, int r)
{
	int m;

	if (l >= r)
		return;

	m = l + (r - l)/2;

	merge_sort(v, l, m);
	merge_sort(v, m + 1, r);
	merge(v, l, m, r);
}

int main(void)
{
	int S, F, E;
	int validos, invalidos;
	int c;
	dado *politicos;

	politicos = calloc(1000000,sizeof(dado));
	validos = invalidos = 0;
	
	scanf("%d %d %d", &S, &F, &E);
	while(scanf("%d", &c) != EOF) {
		if (c >= 0) {
			politicos[c].numero = c;
			politicos[c].votos += 1;
			validos++;
		}
		else
			invalidos++;
	}

	
	merge_sort(politicos, 0, 99);
	merge_sort(politicos, 100, 999);
	merge_sort(politicos, 1000, 9999);
	merge_sort(politicos, 10000, 99999);
	
	printf("%d %d\n", validos, invalidos);
	if (politicos[99].votos == politicos[98].votos)
		printf("Segundo turno\n");
	else
		printf("%d\n", politicos[99].numero);
	
	for (int i = 0; i < S; i++)
		printf("%d%c", politicos[999 - i].numero, i + 1 == S ? '\n' : ' ');

	for (int i = 0; i < F; i++)
		printf("%d%c", politicos[9999 - i].numero, i + 1 == F ? '\n' : ' ');
	
	for (int i = 0; i < E; i++)
		printf("%d%c", politicos[99999 - i].numero, i + 1 == E ? '\n' : ' ');


	return 0;
}
