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

void cria_no(celula *lista,int x)
{
	celula *no = malloc(sizeof(celula));

	while(lista->prox != NULL)
		lista = lista->prox;

	lista->prox = no;
	no->dado = x;
	no->prox = NULL;
}

void mostra(celula *lista)
{
	if (lista == NULL) {
		printf("NULL\n");
	}
	else {
	if (lista->prox != NULL) {
		printf("%d -> ", lista->dado);
		mostra(lista->prox);
	}
	else {
		printf("%d -> ", lista->dado);
		mostra(lista->prox);
	}
	}
}

int remove_depois (celula *p)
{
	celula *c;
	
	if (p->prox != NULL) {	
		c = p->prox;
		p->prox = p->prox->prox;
		free(c);
	}
}

void remove_elemento (celula *le, int x) 
{
	while (le->prox->dado != x && le->prox->prox != NULL) 
		le = le->prox;
	if (le->prox->dado == x)
		remove_depois(le);
}

void remove_todos_elementos (celula *le, int x)
{
	while (le->prox->prox != NULL) {
		if (le->prox->dado == x)
			remove_depois(le);
		le = le->prox;
	}
	if (le->prox->dado == x)
		remove_depois(le);
}

int MAIN(void)
{
 	celula *l = malloc(sizeof(celula));
	celula *l2 = malloc(sizeof(celula));
	int vet[100] = {1,7,9,10,15,9,20,50,9};

	for (int i = 0; i <= 8; i++)
		cria_no(l, vet[i]);

	celula *c;
	c = l;
	for (int i = 0; i <= 8; i++)
		l = l->prox;

	for (int i = 0; i <= 10; i++)
		cria_no(l2, i);


	remove_depois(l);
	mostra(c);
	remove_elemento(l2, 7);
	remove_elemento(l2, 10);
	mostra(l2);
	remove_todos_elementos(c, 9);
	mostra(c);
	return 0;
}
