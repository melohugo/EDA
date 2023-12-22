typedef int Item;

typedef struct no {
	Item info;
	struct no *prox;
} no;

typedef struct cabeca {
	int num_itens;
	no *prox;
	no *ultimo;
} cabeca;

cabeca *cria_pilha(void)
{
	cabeca *le = malloc(sizeof(cabeca));
	le->num itens = 0;
	le->prox = NULL;
	le->ultimo = NULL;
	return le;
}

no *cria_no(Item x)
{
	no *n = malloc(sizeof(no));
	n->prox = NULL;
	n->info = x;
	return n;
}

int vazia(cabeca *p)
{
	return p->prox == NULL;
}

Item espia(cabeca *p)
{
	return p->prox->info;
}

void empilha(cabeca *lista, Item x)
{
	no *novo = cria_no(x);
	if (novo) {
		if(vazia(lista)) 
			lista->ultimo = novo;

		novo->prox = lista->prox;
		lista->prox = novo;

		lista->num_itens++;
	}
}

Item desempilha(cabeca *lista)
{
	no *topo = lista->prox;
	lista->prox = topo->prox;

	if (topo == lista->ultimo)
		lista->ultimo = NULL;

	lista->num_itens--;

	Item x = topo->info;
	free(topo);
	return x;
}
