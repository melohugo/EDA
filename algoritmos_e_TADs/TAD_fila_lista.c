typedef int Item;

typedef struct no {
	Item info;
	struct no *prox;
} no;

typedef struct cabeca {
	int tam;
	no *prox;
	no *ultimo;
} cabeca;

lista *cria_fila(void)
{
	cabeca *ca = malloc(sizeof(lista));
	return ca;
}

no *cria_no(Item x)
{
	no *el = malloc(sizeof(no));
	el->info = x;
	return el;
}

int vazia(cabeca *lista)
{
	return lista->prox == NULL ? 0 : 1;
}

no *primeiro(cabeca *lista)
{
	return lista->prox;
}

no *ultimo(cabeca *lista)
{
	return lista->ultimo;
}

void enfileira(cabeca *lista, Item x)
{
	no *novo = cria_no(x);

	if (novo) {
		novo-prox = NULL;

		if (!vazia(lista))
			lista->ultimo->prox = novo;
		else
			lista->prox = novo;

		lista->ultimo = novo;
		lista->tam++;
	}
}

Item desenfileira(cabeca *lista)
{
	no *lixo = primeiro(lista);
	lista->prox = lista->prox->prox;

	if (lico == lista->ultimo)
		lista->ultimo = NULL;

	lista->tam--;

	Item x = lixo->info;
	return x;
}
