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
	if (f->u + 1 == f->p)
		return 0;

	if (f->u + 1 == f->N && f->p == 0) {
		f->dados = realloc(f->dados, sizeof(int) * (f->N + 1));
		f->dados[f->u++] = x;
		f->N += 1;
	}
	else
	if (f->u + 1 == f->N) {
		f->dados[f->u] = x;
		f->u = 0;
	}
	else 
		f->dados[f->u++] = x;

	return 1;

}

int MAIN(void)
{

	return 0;
}
