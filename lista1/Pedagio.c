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
	int l, d, k, p;
	int valor;
	scanf("%d %d\n%d %d", &l, &d, &k, &p);

	valor = (k*l) + (l/d)*p;
	printf("%d\n", valor);
	return 0;
}
