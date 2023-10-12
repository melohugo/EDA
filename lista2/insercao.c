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
	if (lista->prox != NULL) {
		printf("%d -> ", lista->dado);
		mostra(lista->prox);
	}
	else
		printf("%d\n", lista->dado);
}
*/

void insere_inicio (celula *le, int x)
{
	celula *c = malloc(sizeof(celula));
	c->dado = x;
	
	if (le->prox == NULL) {
		le->prox = c;
		c->prox = NULL;
	}
	else {
		c->prox = le->prox;
		le->prox = c;
	}

}

void insere_antes (celula *le, int x, int y) 
{
	celula *c = malloc(sizeof(celula));
	c->dado = x;
		
	while(le->prox != NULL && le->prox->dado != y)
		le = le->prox;

	c->prox = le->prox;
	le->prox = c;	
}

int MAIN(void)
{
	celula *l = malloc(sizeof(celula));

	l->prox = NULL;
	l->dado = 0;

	for (int i = 0; i <= 10; i++)
//		cria_no(l, i);

//	mostra(l);
//	insere_inicio(l, 100);
//	mostra(l);
//	insere_antes(l, 150, 6);
//	mostra(l);
	return 0;
}
