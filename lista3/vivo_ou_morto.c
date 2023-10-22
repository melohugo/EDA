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

typedef struct crianca {
	int numero;
	struct crianca *prox;
}crianca;

/*
void mostra(crianca *lista)
{
        if (lista == NULL) {
                printf("NULL\n");
        }
        else {
        if (lista->prox != NULL) {
                printf("%d -> ", lista->numero);
                mostra(lista->prox);
        }
        else {
                printf("%d -> ", lista->numero);
                mostra(lista->prox);
        }
        }
}
*/

void *cria_fila(crianca *fila, int *ordem, int len)
{
	crianca *no;

	for (int i = 0; i < len; ordem++, i++) {
		no = malloc(sizeof(crianca));	
		no->numero = *ordem;
		fila->prox = no;
		fila = no;
	}

	fila->prox = NULL;
}

void rm(crianca *f)
{
	crianca *c;

	c = f->prox;
	f->prox = f->prox->prox;
	free(c);
}

void le_n(int *ordem, int len)
{
	for (int i = 0; i < len; i++) 
		scanf("%d ", &ordem[i]);
}

int MAIN(void)
{

	int P, R;
	int N, J;
	int teste;
	int ordem[1000];
	int acao[1000];
	crianca *fila, *aux;

	teste = 1;
	while (scanf("%d %d", &P, &R), P != 0 && R != 0) {
		le_n(ordem, P);	
		fila = malloc(sizeof(crianca));
		cria_fila(fila, ordem, P);
		//mostra(fila);
		
		for (int i = 0; i < R; i++) {
			aux = fila;

			scanf("%d %d ", &N, &J);
			le_n(acao, N);
			
			for (int j = 0; j < N; j++) {
				if (acao[j] != J) 
					rm(aux);
				else
					aux = aux->prox == NULL ? aux : aux->prox;
			}
		}

		printf("Teste %d\n%d\n", teste, fila->prox->numero);
		teste++;
		free(fila->prox);
		free(fila);
	}
	printf("\n");

	return 0;
}
