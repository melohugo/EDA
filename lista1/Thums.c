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
	int c;
	scanf("%d", &c);
	
	for (int i = 1; i <= c; i++) {
		if (i % 2 == 0)
			printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
		else
			printf("THUMS THUMS THUMS\n");
	}
	return 0;
}
