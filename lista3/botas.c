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

typedef struct pilha {
	int tamanho;
	char lado;
	struct pilha *prox;
} no;


void empilha (no *p, int tamanho, char lado)
{
	no *c;

	c = malloc(sizeof(no));

	c->tamanho = tamanho;
	c->lado = lado;
	c->prox = p->prox;
	p->prox = c;
}

void rm(no *f)
{
	no *c;

	c = f->prox;
	f->prox = f->prox->prox;
	free(c);
}


int procura(no *p, int tamanho, char lado)
{
	if (p->prox == NULL)
		return 0;

	if (p->prox->tamanho == tamanho && p->prox->lado != lado)  {
		rm(p);
		return 1;
	}
	
	return procura(p->prox, tamanho, lado);
}

int MAIN(void)
{
	int tamanho, total;
	char lado;
	no *p;

	p = malloc(sizeof(no));
	p->prox = NULL;
	total = 0;
	while (scanf("%d %c ", &tamanho, &lado) > 0) {
		if(procura(p, tamanho, lado)) 
			total++;
		else
			empilha(p, tamanho, lado);
	}
	printf("%d\n", total);
	return 0;
}
