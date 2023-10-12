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
void adiciona(celula *le, int x)
{
	celula *novo = malloc(sizeof(celula));
	
	while (le->prox != NULL)
		le = le->prox;

	novo->dado = x;
	novo->prox = NULL;
	le->prox = novo;
}
*/

celula *busca (celula *le, int x) 
{
	while (le->dado != x && le->prox != NULL) 
		le = le->prox;

	if (le->prox == NULL && le->dado != x)
		return NULL;
	else
		return le;	
}

celula *busca_rec (celula *le, int x)
{
	if (le->dado != x && le->prox != NULL)
		busca_rec(le->prox, x);
	else
		return le->dado == x ? le : NULL;
}

int MAIN(void)
{
	celula *le = malloc(sizeof(celula));	
	celula *ln = malloc(sizeof(celula));	

	le->dado = 10;
	show(le->dado);
	
	for (int i = 0; i < 10; i++)
		//adiciona(le, i);

	ln = busca(le, 6);
	show(ln->dado);
	ln = busca(le, 9);
	show(ln->dado);
	return 0;
}
