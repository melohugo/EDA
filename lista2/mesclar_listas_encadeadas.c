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

void mescla_listas (celula *l1, celula *l2, celula *l3)
{	
	celula *c;
	l1 = l1->prox;	
	l2 = l2->prox;	

	if (l1 == NULL) 
		l3->prox = l2;
	else
	if (l2 == NULL)
		l3->prox = l1;
	else {
		do {
			if (l1->dado < l2->dado) {
				l3->prox = l1;
				l1 = l1->prox;
			}
			else {
				l3->prox = l2;
				l2 = l2->prox;
			}
			c = l3;
			l3 = l3->prox;
		}while (l1 != NULL && l2 != NULL);
			
		if (l1 == NULL) 
			c->prox->prox = l2;
		else
			c->prox->prox = l1;
	}
}

/*
int MAIN(void)
{
	celula *l = malloc(sizeof(celula));
	celula *l1 = malloc(sizeof(celula));
	celula *l2 = malloc(sizeof(celula));
	celula *l3 = malloc(sizeof(celula));
	int vet[100] = {1,7,9,10,15};
	int vet2[100] = {1,7,8,11,13};
	l->prox = NULL;
	l->dado = 0;

	for (int i = 0; i <= 4; i++)
		cria_no(l1, vet[i]);

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
