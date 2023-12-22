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
	long long numero;
	long long votos;
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
	long long S, F, E;
	long long validos, invalidos;
	long long votosp;
	long long c;
	dado *politicos;
	politicos = calloc(1000000,sizeof(dado));
	validos = invalidos = votosp = 0;
	
	scanf("%lld %lld %lld", &S, &F, &E);
	while(scanf("%lld", &c) != EOF) {
		if (c >= 10) {
			politicos[c].numero = c;
			politicos[c].votos += 1;
			validos++;
		}
		else
			invalidos++;
		if (c < 100 && c > 1)
			votosp++;
	}
	
	merge_sort(politicos, 10, 99);
	merge_sort(politicos, 100, 999);
	merge_sort(politicos, 1000, 9999);
	merge_sort(politicos, 10000, 99999);
	
	printf("%lld %lld\n", validos, invalidos);
	if (((float)politicos[99].votos/(float)votosp) * 100 >= 51)
		printf("%lld\n", politicos[99].numero);
	else
		printf("Segundo turno\n");
	
	for (long long i = 0; i < S; i++)
		printf("%lld%c", politicos[999 - i].numero, i + 1 == S ? '\n' : ' ');
	for (long long i = 0; i < F; i++)
		printf("%lld%c", politicos[9999 - i].numero, i + 1 == F ? '\n' : ' ');
	
	for (long long i = 0; i < E; i++)
		printf("%lld%c", politicos[99999 - i].numero, i + 1 == E ? '\n' : ' ');
	return 0;
}
