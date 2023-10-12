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

void divide_lista (celula *l, celula *l1, celula *l2)
{
	do{
		l = l->prox;
		if (l->dado % 2 == 0) {
			l2->prox = l;
			l2 = l2->prox;
		}
		else {
			l1->prox = l;
			l1 = l1->prox;
		}
	}while (l->prox != NULL);

	l1->prox = NULL;
	l2->prox = NULL;
}

int MAIN(void)
{
	celula *l = malloc(sizeof(celula));
	celula *l1 = malloc(sizeof(celula));
	celula *l2 = malloc(sizeof(celula));

	l->prox = NULL;
	l->dado = 0;

	for (int i = 0; i <= 10; i++)
//		cria_no(l, i);

//	mostra(l);
//	divide_lista(l, l1, l2);	

//	mostra(l1);
//	mostra(l2);
	return 0;
}
