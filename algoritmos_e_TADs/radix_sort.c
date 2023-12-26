#define bitsbyte 8
#define bytesword 4
#define R (1 << bitsbyte)
#define digit(N,D) (((N) >> ((D) * bitsbyte)) & (R-1))

void radix_sort(int *v, int l, int r) 
{
	int i, w;
	int aux[r-l+1], coutn[R+1];

	for (w = 0; w < bytesword; w++) {
		memset(count, 0, sizeof(int)*(R+1));

		for (i = l; i <= r; i++)
			count[digit(v[i], w) + 1]++;

		for (i = 1; i <= R; i++)
			count[i] += count[i-1];

		for (i = l; i <= r; i++) {
			aux[count[digit(v[i], w)]] = v[i];
			count[digit(v[i], w)]++;
		}

		for (i = l; i <= r; i++)
			v[i] = aux[i - l];
	}
}
