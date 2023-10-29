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
#define TRUE 1

typedef struct no {
	int dado;
	struct no *esq, *dir;
} no;

typedef struct pilha {
	no *end;
	struct pilha *prox;
} pilha;


void empilha(pilha *p, no *a)
{
	pilha *c;

	c = malloc(sizeof(pilha));
	c->end = a;
	c->prox = p->prox;
	p->prox = c;
}

no *desempilha(pilha *p)
{
	no *c;
	pilha *q;

	c = p->prox->end;
	q = p->prox;
	p->prox = q->prox;
	free(q);
	return c;
	
}

no *topo(pilha *p)
{
	return p->prox->end;
}



void em_ordem (no *raiz)
{
	pilha *p;
	no *proc;

	p = malloc(sizeof(pilha));
	p->prox = NULL;

	empilha(p, raiz);
	while (TRUE) {
		proc = desempilha(p);		
		if (proc != NULL) {
			empilha(p, proc);
			empilha(p, proc->esq);
		}
		else {
			if (p->prox == NULL) 
				break;
			proc = desempilha(p);
			printf("%d ", proc->dado);
			empilha(p, proc->dir);
		}
	}
	printf("\n");
}

/*
no  *criaNo(no *a, int dado)
{
	no *c;

	c = malloc(sizeof(no));
	c->dado = dado;
	c->dir = NULL;
	c->esq = NULL;
	return c;
}

int MAIN(void)
{
	no *arvore;

	arvore = malloc(sizeof(no));
	arvore->dado = 2;
	arvore->esq = criaNo(arvore, 5);
	arvore->dir = criaNo(arvore, 7);
	arvore->esq->esq = criaNo(arvore, 3);
	arvore->esq->dir = criaNo(arvore, 8);
	arvore->esq->dir->esq = criaNo(arvore, 4);
	arvore->dir->dir = criaNo(arvore, 6);
	arvore->dir->esq = criaNo(arvore, 1);
	arvore->dir->esq->dir = criaNo(arvore, 9);


	em_ordem(arvore);
	return 0;
}
*/
