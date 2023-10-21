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
	int *v; // Vetor que contem os elementos da pilha
	int N; // Tamanho de v
	int topo; // Indicador do topo
} pilha;

void empilha (pilha *p, int x)
{
	if (p->topo == p->N) {
		p->v = realloc(p->v, sizeof(int) * p->N);
		p->N *= 2;
	}

	p->v[p->topo++] = x;
}

int desempilha (pilha *p, int *y)
{
	if (p->topo == 0)
		return 0;
	
	p->topo--;
	*y = p->v[p->topo--];
	return 1;
}

/*
int MAIN(void)
{
	pilha *p;
	p = malloc(sizeof(pilha));
	p->v = malloc(sizeof(int)*5);
	p->topo = 0;
	p->N = 5;
	int y;

	show(desenpilha);

	for (int i = 0; i < 5; i++)
		empilha(p, i);

	for (int i = 0; i < 6; i++)
		desempilha(p,&y);

	return 0;
}
*/
