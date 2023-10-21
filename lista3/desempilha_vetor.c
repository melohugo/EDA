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

typedef struct pilha {
	int *dados;
	int N, topo;
} pilha;

int desempilha (pilha *p, int *y) 
{
	if (p->topo == 0)
		return 0;

	*y = p->dados[p->topo - 1];
	p->topo--;

	return 1;
}

int MAIN(void)
{

	return 0;
}
