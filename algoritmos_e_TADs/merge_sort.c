typedef int Item;
#define Key(A) (A)

void merge(Item *v, int l, int m, int r)
{
	int i, j, k;
	Item *aux;
	
	aux = malloc(sizeof(Item)*(r + 1 - l));
	k = 0;
	for (i = l, j = m + 1; i <= m && j <= r; )
		aux[k++] = Key(v[i]) <= Key(v[j]) ? v[i++] : v[j++];

	while (i <= m)
		aux[k++] = v[i++];

	while (j <= r)
		aux[k++] = v[j++];
			
	for (int x = 0; l <= r; l++, x++)
		v[l] = aux[x];

	free(aux);
}

void merge_sort(Item *v, int l, int r)
{
	if (l >= r)
		return;

	int m = l + (r - l)/2;

	merge_sort(v, l, m);
	merge_sort(v, m + 1, r);
	merge(v, l, m, r);
}
