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

typedef struct celula {
	int dado;
	struct celula *prox;
} celula;

celula *enfileira (celula *f, int x)
{
	celula *c;

	c = malloc(sizeof(celula));
	if (c == NULL)
		return NULL;

	c->prox = f->prox;
	f->dado = x;
	f->prox = c;
	return c;
}

int MAIN(void)
{

	return 0;
}
