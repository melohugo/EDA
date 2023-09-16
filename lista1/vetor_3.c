#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define show(n) printf("%d\n", n);
#define entrou printf("ENTROU\n");
#define swap(c1, c2) {int c = c1; c1 = c2; c2 = c;}

int main(void)
{
	int n, c, p, m;
	
	scanf("%d", &n);
	
	int par[n], imp[n];
	int vet[n];

	p = m = 0;
	for (int i = 0; i < n; i++)
		scanf("%d", &vet[i]);
		
	for (int i = 0; i < n; i++) {
		if (!(vet[i] % 2))
			par[p++] = vet[i];
		else
			imp[m++] = vet[i];
	}
	for (int i = 0; i < p; i++)
		printf("%d ", par[i]);

	printf("\n");

	for (int i = 0; i < m; i++)
		printf("%d ", imp[i]);

	printf("\n");
	return 0;
}
