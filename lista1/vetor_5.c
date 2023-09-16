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
	int n, c;

	scanf("%d", &n);

	int vet[n];
	for (int i = 0; i < n; i++)
		scanf("%d ", &vet[i]);

	scanf("%d", &c);

	for (int i = 0; i < n; i++) {
		if (c == vet[i]) {
			printf("pertence\n");
			return 0;
		}
	}
	printf("nao pertence\n");
	return 0;
}
