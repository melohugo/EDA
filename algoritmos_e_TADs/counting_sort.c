typedef int Item;
#define Key(A) (A)
#define MAX 10000
#define R 5

Item aux[MAX];
void counting_sort(Item *v, int l, int r)
{
	int i, count[R + 1];

	for (i = 0; i <= R; i++)
		count[i] = 0;

	for (i = l; i <= r; i++)
		count[Key(v[i]) + 1]++;
	
	for (i = 1; i <= R; i++)
		count[i] += count[i - 1];

	for (i = l; i <= r; i++) {
		aux[count[Key(v[i])]] = v[i];
		count[v[i]]++;
	}

	for (i = l; i <= r; i++)
		v[i] = aux[i - l];
}
