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

int empilha (pilha *p, int x)
{
	int *c;
	if (p->topo + 1 == p->N) {
		p->dados = realloc(p->dados, sizeof(int)*(p->N * 2));
		p->N *= 2;
	}

	p->dados[p->topo++] = x;
	return 1;
}

int MAIN(void)
{
	pilha *p;

	p = malloc(sizeof(pilha));

	p->dados = malloc(sizeof(int) * 5);
	p->N = 5;
	p->topo = 0;

	for (int i = 0; i <= 6; i++)
//		empilha(p, i);

	for (int i = 0; i <= 6; i++)
		show(p->dados[i]);

	entrou;
	show(p->N);	
	return 0;
}
