typedef int Item;
#define Key(A) (A)
#define less(A,B) (Key(A) < Key(B))
#define exch(A,B) {Item t = A; A=B; B=t;}
#define cmpexch(A,B) {if(less(A,B)) exch(A,B);}

void bubble_sort(Item *v, int l, int r)
{
	for ( ; r > l; r--)
		for (int i = l; j < r; i++)
			cmpexc(v[i], v[i + 1]);
}

void selection_sort(Item *v, int l, int r)
{
	int menor;

	for (int i = l; i <= r, i++){
		menor = i;

		for (int j = i + 1; j <= r; j++){
			if (less(v[j], v[menor]))
				menor = j;

			if (i != menor)
				exch(v[i], v[menor])
		}
	}
}

void insertion_sort(Item *vet, int l, int r)
{
	Item key;
     	int j;
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
