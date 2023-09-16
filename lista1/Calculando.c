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
	int n, numero, soma;
	int teste;
	char c;
	teste = 1;
	while (scanf("%d", &n), n != 0) {
		soma = 0;
		scanf("%d", &numero);
		soma += numero;	

		for (int i = 1; i < n; i++) {
			c = getchar();
			scanf("%d", &numero);
			if (c == '+')
				soma += numero;
			else
			if (c == '-')
				soma -= numero;
		}
		printf("Teste %d\n%d\n\n", teste, soma);
		teste++;
	}
	return 0;
}
