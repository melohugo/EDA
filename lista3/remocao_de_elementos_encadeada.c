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

/*
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
*/

int desenfileira (celula *f, int *y)
{
	celula *c;

	if (f->prox == NULL)
		return 0;

	c = f->prox;
	*y = c->dado;
	f->prox = f->prox->prox;
	free(c);	
	return 1;

}

/*
int MAIN(void)
{
	celula *l = malloc(sizeof(celula));
	celula *l2 = malloc(sizeof(celula));
	l2->prox = NULL;
	l2->dado = 0;

	for (int i = 0; i <= k; i++)
		cria_no(l, vet[i]);

	for (int i = 0; i <= 4; i++)
		cria_no(l2, vet[i]);

	l3->prox = NULL;
	l3->dado = 0;

	mostra(l1);
	mostra(l3);
	mescla_listas(l1, l3, l);
	mostra(l);
	return 0;
}
*/
