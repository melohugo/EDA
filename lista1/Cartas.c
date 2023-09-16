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
	int cres, decr;
	int vet[5];

	cres = decr = 0;

	for (int i = 0; i < 5; i++)
		scanf("%d ", &vet[i]);

	for (int i = 1; i < 5; i++) {
		if (vet[i] > vet[i - 1])
			cres++;
		else
			decr++;
	}
	if (cres == 4)
		printf("C\n");
	else
	if (decr == 4)
		printf("D\n");
	else
		printf("N\n");
	return 0;
}
