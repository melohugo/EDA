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

typedef struct celula {
	int dado;
	struct celula *prox;
} celula;

celula *cabeca;

void enfileira (celula **f, int x)
{
	celula *c;
	celula *primeiro;

	c = malloc(sizeof(celula));
	c->dado = x;

	

	if ((*f)->prox == NULL) {
		(*f)->prox = c;
		c->prox = c;
	}
	else {
		primeiro = (*f)->prox;
		(*f)->prox = c;
		//c->prox = primeiro;
		c->prox = &(*f)->prox;
	}
	printf("primeiro = %d ", primeiro->dado);
	printf("f->dado = %d ", (*f)->dado);
	printf("f->prox->dado = %d\n", (*f)->prox->dado);
}

int desenfileira (celula *f, int *y)
{
	if (f->prox == NULL)
		return 0;
	if (f->prox = f->prox->prox) {

	}

	celula *c;
	
	c = f->prox;
	*y = c->dado;

	f->prox = c->prox;
	free(c);
	return 1;
}

void cria_no(celula *lista,int x)
{
	celula *no = malloc(sizeof(celula));
	celula *cabeca;

	cabeca = lista;

	while(lista->prox->prox != cabeca->prox) {
		show(lista->dado)
		entrou
		lista = lista->prox;
	}
	
	lista->prox = no;
	no->dado = x;
	no->prox = cabeca;
}

void mostra(celula *lista)
{
	if (lista->prox->prox != cabeca->prox) {
		printf("%d -> ", lista->prox->dado);
		mostra(lista->prox);
	}
	else {
		printf("%d -> ", lista->prox->dado);
		printf("primeiro\n");
	}
}

celula *calc_ultimo(celula *l)
{
	celula *c;

	c = l;
	while(c->prox->prox != l->prox) 
		c = c->prox;

	return c;
}

int MAIN(void)
{
	celula *l = malloc(sizeof(celula));
	celula *l2 = malloc(sizeof(celula));
	celula *ultimo;
	celula **f;
	l->prox = NULL;
	l->dado = 0;
	int vet[100] = {1,2,3,4};

	cabeca = l;
	int y;

	show(desenfileira(l, &y))

	enfileira(&l, 15);

	mostra(l);
	/*
	for (int i = 0; i <= 4; i++)
		cria_no(l, vet[i]);
		*/

	celula **aux;
	aux = &(l->prox);
	for (int i = 1; i <= 4; i++) {
		enfileira(aux, i);
		aux = &((*aux)->prox);
	}


	entrou
	ultimo = calc_ultimo(l);

	mostra(l);
	f = &ultimo;
	enfileira(aux, 54);
	mostra(l);

	show(desenfileira(l, &y))
	show(y)
	mostra(l);
	return 0;
}
