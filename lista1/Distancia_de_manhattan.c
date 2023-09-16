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
	int xm, ym, xr, yr;
	int distanciax, distanciay;
	
	scanf("%d %d %d %d\n",  &xm, &ym, &xr, &yr);
	distanciax = xm - xr;
	distanciax *= distanciax > 0 ? 1 : -1;	
	distanciay = ym - yr;
	distanciay *= distanciay > 0 ? 1 : -1;	

	printf("%d\n", distanciax + distanciay);
	return 0;
}
