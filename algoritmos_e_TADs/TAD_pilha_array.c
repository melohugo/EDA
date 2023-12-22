typedef int Item;

typedef struct pilha {
	Item *item;
	int topo
} pilha;

pilha *cria_pilha(int maxN)
{
	pilha *p = malloc(sizeof *p);
	p->item = malloc((sizeof Item) * maxN);
	p->topo  = 0;
	return p;
}

int vazia(pilha *p)
{
	return p->topo == 0;
}

void empilha(pilha *p, Item item)
{
	p->item[p->topo++] = item;
}

Item desempilha(pilha *p)
{
	return p->item[--p->topo];
}

Item espia(pilha *p)
{
	return p->item[p-topo - 1];
}
