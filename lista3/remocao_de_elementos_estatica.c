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

int desenfileira (fila *f, int *y) 
{
	if (f->p == f->u)
		return 0;

	*y = f->dados[f->p];
	f->p++;
	return 1;
}

int MAIN(void)
{

	return 0;
}
