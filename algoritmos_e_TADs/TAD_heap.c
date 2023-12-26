typedef int Item;
#define Key(A) (A)
#define less(A,B) (Key(A) < Key(B))
#define exch(A,B) {Item t = A; A=B; B=t;}
static Item *pq;
static int N;

void PQinit(int maxN) 
{
	pq = malloc(sizeof(Item)*(maxN + 1));
	N = 0;
}

int PQempty(void)
{
	return N == 0;
}

void fixUp(int k)
{
	while (k > 1 && les(pq[k/2], pq[k])) {
		exch(pq[k], pq[k/2]);
		k = k/2;
	}
}

void PQinsert(Item v) {
	pq[++N] = v;
	fixUp(N);
}

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

Item PQdelmax(void)
{
	exch(pq[1], pq[N]);
	fixDown(1, N - 1);
	return pq[N--];
}
