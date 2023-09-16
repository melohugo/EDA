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
	int N, C;
	int s, e;
	int total;
	char controle;

		total = 0;
	controle = 'N';
	scanf("%d %d ", &N, &C);

	for (int i = 0; i < N; i++) {
		scanf("%d %d ", &s, &e);
		total = total + e - s;
		if (total > C)
			controle = 'S';
	}
	printf("%c\n", controle);
	return 0;
}
