void bubble_sort(int *v, int l, int r)
{
	for ( ; r > l; r--)
		for (int i = l; j < r; i++)
			if (v[i] > v[i + 1])
				swap(v[i], v[i + 1])
}

void selection_sort(int *v, int l, int r)
{
	int menor;

	for (int i = l; i <= r, i++){
		menor = i;

		for (int j = i + 1; j <= r; j++){
			if (v[j] < v[menor])
				menor = j;

			if (i != menor)
				swap(v[i], v[menor])
		}
	}
}

void insertion_sort(int *vet, int l, int r)
{
	int key, j;
	for (int i = l + 1; i < r; i++) {
		key = vet[i];

		j = i - 1;
		while (j >= l && vet[j] > key) {
			vet[j + 1] = vet[j];	
			j--;
		}
		vet[j + 1] = key;
	}
}
