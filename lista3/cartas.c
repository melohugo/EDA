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

typedef struct pilha_ pilha;
typedef struct no_ no;

struct pilha_ {
	int carta;
	int tamanho;
	no *topo;
	no *primeira;
};

struct no_ {
	int carta;
	no *prox;
};

void cria_pilha(pilha *p, int len)
{
	no *c;
	no *aux;

	p->tamanho = len;

	aux = malloc(sizeof(no));
	aux->carta = len;
	p->topo = aux;

	for (int i = len - 1; i > 0; i--) {
		c = malloc(sizeof(no));

		c->prox = p->topo;
		p->topo = c;
		c->carta = i;
	}

	aux->prox = NULL;
	p->primeira = aux;
}

int operacao(pilha *p)
{
	no *c;
	int descarte;

	c = p->topo;	
	p->topo = c->prox;
	descarte = c->carta;
	free(c);

	c = p->topo;
	p->topo = c->prox;
	c->prox = NULL;

	p->primeira->prox = c;
	p->primeira = c;

	p->tamanho--;
	return descarte;
}

int MAIN(void)
{
	int len, u, i;
	int *vet;
	pilha *p;

	scanf("%d", &len);
	vet = malloc(sizeof(int)*len);
	p = malloc(sizeof(pilha));

	u = 0;

	cria_pilha(p, len);

	while(p->tamanho >= 2) 
		vet[u++] = operacao(p);	

	printf("Cartas descartadas:");

	for (i = 0; i < len - 2; i++)	
		printf(" %d ,", vet[i]);
	printf(" %d\n", vet[i]);

	printf("Carta restante: %d\n", p->primeira->carta);
	return 0;
}
