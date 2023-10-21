#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#define show(n) printf("%d\n", n);
#define entrou printf("ENTROU\n");
#define swap(c1, c2) {int c = c1; c1 = c2; c2 = c;}
//#define MAIN main

typedef struct fila {
	int *dados;
	int N, p, u;
} fila;

int enfileira (fila *f, int x)
{
	if (f->u == f->N) {
		f->dados = realloc(f->dados, sizeof(int) * (f->N * 2));
		if (f->dados == NULL)
			return 0;
		f->N *= 2;
	}

	f->dados[f->u++] = x;
	return 1;
}

int MAIN(void)
{

	return 0;
}
