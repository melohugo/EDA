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
	int n, c, min, cont;
	
	min = INT_MAX;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &c);
		if (c < min) {
			min = c;
			cont = i;
		}
	}

	printf("%d\n", cont);
	return 0;
}
