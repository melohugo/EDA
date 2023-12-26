typedef int Item;
#define Key(A) (A)
#define less(A,B) (Key(A) < Key(B))
#define exch(A,B) {Item t = A; A=B; B=t}
#define cmpexch(A,B) {if(less(A,B)) exch(A,B);}

int partition (Item *v, int l, int r)
{
	int i = l - 1;
	int j =  r;
	Item pivot = v[r];

	while (i < j) {
		while (v[++i] < pivot)
			;
		while (v[--j] >= pivot && j > l)
			;
		if (i < j)
			exch(v[i], v[j]);
	}
	exch(v[i], v[r]);

	return i;
}

void quick_sort(Item *v, int l, int r)
{
	if (r <= l)
		return;

	cmpexch(v[l], v[(l+r)/2]);
	cmpexch(v[l], v[r]);
	cmpexch(v[r], v[(l+r)/2]);

	exch(v[(l+r)/2], v[r-1]);
	cmpexch(v[l], v[r-1]);
	cmpexch(v[l], v[r]);
	cmpexch(v[r-1], v[r]);

	int p = partition(v, l + 1, r - 1);

	quick_sort(v, l, p - 1);
	quick_sort(v, p + 1, r);
}
