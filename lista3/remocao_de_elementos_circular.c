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

typedef struct fila {
	int *dados;
	int N, p, u;
} fila;

int desenfileira (fila *f, int *y)
{
	if (f->u == f->p)
		return 0;

	if (f->p + 1 == f->N) {
		*y = f->dados[f->p];
		f->p = 0;
	}
	else {
		*y = f->dados[f->p];
		f->p += 1;
	}

	return 1;

}

/*
void enfileira(fila *f, int x)
{
	if (f->u + 1 == f->N) {
		f->dados[f->u] = x;		
		show(f->dados[f->u]);
		f->u = 0;
	} 
	else {
		f->dados[f->u] = x;		
		show(f->dados[f->u]);
		f->u += 1;
	}	
}

int MAIN(void)
{
	int y;
	fila *f = malloc(sizeof(fila));
	f->dados = malloc(sizeof(int)*5);
	f->N = 0;
	f->p = 0;
	f->u = 0;

	for (int i = 0; i < 5; i++)
		enfileira(f, i);
		
	entrou;
	for (int i = 0; i < 3; i++) {
		desenfileira(f, &y);
		show(y);
	}

	entrou;
	for (int i = 0; i < 3; i++)
		enfileira(f, i);

	entrou;
	for (int i = 0; i < 6; i++) {
		show(desenfileira(f, &y));
	}
	return 0;
}
*/
