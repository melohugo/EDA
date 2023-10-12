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
*/

void imprime (celula *le)
{
	while(le->prox != NULL) {
		le = le->prox;
		printf("%d -> ", le->dado);
	}

	printf("NULL\n");
}

void imprime_rec (celula *le)
{

	if (le->prox != NULL) {
		le = le->prox;
		printf("%d -> ", le->dado);
		imprime_rec(le);
	}
	else
		printf("NULL\n");
}

int MAIN(void)
{
	celula *l = malloc(sizeof(celula));
	celula *l1 = malloc(sizeof(celula));

	l->prox = NULL;
	l->dado = 0;

	l1->prox = NULL;

	for (int i = 0; i <= 10; i++)
//		cria_no(l, i);
	
//	imprime(l);
//	imprime(l1);
//	imprime_rec(l);
//	imprime_rec(l1);
	return 0;
}
