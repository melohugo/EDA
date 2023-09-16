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
	float a, g, ra, rg;
	scanf("%f %f %f %f", &a, &g, &ra, &rg);

	printf("%c\n", ((g/a) > (rg/ra)) ? 'A' : 'G');
	return 0;
}
