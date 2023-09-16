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
	int xc, yc, zc;
	int xn, yn, zn;
	int conteiner;

	scanf("%d %d %d\n%d %d %d", &xc, &yc, &zc, &xn, &yn, &zn);

	conteiner = (xn/xc) * (yn/yc) * (zn/zc);

	printf("%d\n", conteiner);
	return 0;
}
