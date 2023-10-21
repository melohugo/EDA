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

int empilha (celula *p, int x)
{
	celula *c;

	c = malloc(sizeof(celula));

	if (c == NULL)
		return 0;

	c->dado = x;
	c->prox = p->prox;
	p->prox = c;
	return 1;
}

int MAIN(void)
{

	return 0;
}
