#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define show(n) printf("%d\n", n);
#define entrou printf("ENTROU\n");
#define swap(c1, c2) {int c = c1; c1 = c2; c2 = c;}
#define MAIN main

int soma_d(long int n, long int soma)
{
	if (n > 0)
		soma_d(n/10,soma + n % 10);	
	else
		return soma;
}

int MAIN(void)
{
	long int c;
	scanf("%ld", &c);
	printf("%ld\n", soma_d(c, 0));
	return 0;
}
