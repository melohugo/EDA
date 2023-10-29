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

typedef struct no {
	int dado;
	struct no *esq, *dir;
} no;

typedef struct pilha {
	no *end;
	struct pilha *prox;
}pilha;

void empilha(pilha *p, no *end)
{
	pilha *c;

	c = malloc(sizeof(pilha));
	c->end = end;
	c->prox = p->prox;
	p->prox = c;
}

no *desempilha(pilha *p)
{
	pilha *c;

	c = p->prox;
	p->prox = c->prox;
	return c->end;
}

void pre_ordem (no *raiz)
{
	pilha *p;
	no *proc;

	p = malloc(sizeof(pilha));
	p->prox = NULL;	

	empilha(p, raiz);
	while (p->prox != NULL) {
		proc = desempilha(p);
		if (proc != NULL) {
			printf("%d ", proc->dado);
			empilha(p, proc->dir);
			empilha(p, proc->esq);
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


	pre_ordem(arvore);
	return 0;
}
*/
