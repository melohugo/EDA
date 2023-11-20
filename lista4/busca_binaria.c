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

int busca_binaria(int *v, int l, int r, int x) 
{
	int m;
	
	m = l + (r - l)/2;
	
	if (v[m] == x)
		return m;
	else if (l + 1 >= r)
		return v[m] >= x ? l : r;
	else if(v[m] > x)
		return busca_binaria(v, l, m, x);
	else 
		return busca_binaria(v, m, r, x);
}

int MAIN(void)
{
	int N, M, x;
	int *ns, *ms;

	scanf("%d %d", &N, &M);
	
	ns = malloc(sizeof(int)*N);
	ms = malloc(sizeof(int)*M);

	for (int i = 0; i < N; i++)
		scanf("%d", &ns[i]);


	for (int i = 0; i < M; i++) {
		scanf("%d", &x);
		printf("%d\n", busca_binaria(ns, 0, N, x));
	}
	return 0;
}
