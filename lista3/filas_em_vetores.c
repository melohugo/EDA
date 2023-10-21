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

typedef struct {
	int *v; // Vetor que representa a fila
	int N; // Tamanho da fila
	int inicio, fim; // Indicadores de inicio e final da fila
} fila;

int enfileira (fila *f, int x)
{
	if (f->fim + 1 == f->inicio || (f->fim + 1 == f->N && f->inicio == 0))
		return 0;
	if (f->fim + 1 == f->N) {
		f->v[f->fim] = x;
		f->fim = 0;
	}
	else 
		f->v[f->fim++] = x;

	return 1;
}

int desenfileira (fila *f, int *y) 
{
	if (f->inicio == f->fim)
		return 0;
	if (f->inicio + 1 == f->N) {
		*y = f->v[f->inicio];
		f->inicio = 0;
	}
	else 
		*y = f->v[f->inicio++];

	return 1;
}


int MAIN(void)
{

	return 0;
}
