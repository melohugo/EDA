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
	char str[1001];
	int tamanho;

	scanf("%s", str);

	for (tamanho = 0; str[tamanho] != '\0'; tamanho++)
		;

	printf("%d\n", tamanho);
	return 0;
}
