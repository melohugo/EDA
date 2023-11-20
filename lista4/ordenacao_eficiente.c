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

int partition(int *v, int l, int r)
{
	int i, j, p;

	i = l - 1;
	j = r;
	p = v[r];
	while (i < j) {
		while (v[++i] < p)
			;
		while (v[--j] >= p && j > l)
			;
		if (i < j)
			swap(v[i], v[j]);
	}	
	swap(v[i], v[r]);
	return i;
}

void quick_sort(int *v, int l, int r)
{
	int p;

	if (l >= r)
		return;

	p = partition(v, l, r);
	quick_sort(v, l , p-1);
	quick_sort(v ,p + 1, r);
}

int MAIN(void)
{
	int *vet;
	int len, n;
	
	scanf("%d", &n);

	vet = malloc(sizeof(int)*n);
	for (len = 0; scanf("%d ", &vet[len]) != EOF; len++)
		;

	quick_sort(vet, 0, len - 1);

	for (int i = 0; i < len; i++)
		printf("%d%c", vet[i], i + 1 == n ? '\n' : ' ');
	return 0;
}
