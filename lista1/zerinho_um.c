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
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c) {
		printf("empate\n");
		return 0;
	}

	if (a == b) {
		printf("C\n");
		return 0;
	}
	if (a == c) {
		printf("B\n");
		return 0;
	}
	if (b == c) {
		printf("A\n");
		return 0;
	}

	return 0;
}
