typedef int Item;
#define Key(A) (A)
#define less(A,B) (Key(A) < Key(B))
#define exch(A,B) {Item t = A; A=B; B=t;}
static Item *pq;
static int N;

void fixDown(int k, int N)
{
	int j;

	while (2*k <= N) {
		j = 2*k;

		if (j < N && less(pq[j], pq[j + 1]))
			j++;
		if (!less(pq[k], pq[j]))
			break;
		exch(pq[k], pq[j]);
		k = j;
	}
}

void heap_sort(Item *v, int l, int r)
{
	pq = v + l - 1;

	N = r - l + 1;
	for (int k = N/2; k >= 1; k--) {
		fixDown(k, N);
	}

	while (N > 1) {
		exch (pq[1], pq[N]);
		fixDown (1, --N);
	}
}
