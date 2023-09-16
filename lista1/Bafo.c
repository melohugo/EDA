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
	int teste;
	int B, A, c;
	int b, a;

	teste = 1;
	while ((scanf("%d ", &c)), c != 0) {
		A = B = 0;
		for (int i = 0; i<c; i++){
			scanf("%d %d ",&a, &b);
			A += a;
			B += b;	
		}
		printf("Teste %d\n%s\n", teste, A>B? "Aldo" : "Beto");
		printf("\n");

		teste++;
	}
	return 0;
}
