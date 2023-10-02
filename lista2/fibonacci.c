#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define show(n) printf("%d\n", n);
#define entrou printf("ENTROU\n");
#define swap(c1, c2) {int c = c1; c1 = c2; c2 = c;}
//#define MAIN main

static long int fib[100] = {0};

long int fibonacci (int n)
{
	if (n == 1) {
		fib[n] = 1;
		return 1;
	}
	if (n == 2) {
		fib[n] = 1;
		return 1;
	}

	if (fib[n - 1] != 0 && fib[n - 2]) {	
		fib[n] = fib[n - 1] + fib[n - 2];
		return fib[n];
	}

	fib[n - 1] = fibonacci(n - 1);
	fib[n - 2] = fibonacci(n - 2);
	fib[n] = fib[n - 1] + fib[n - 2];
	return fib[n];
}
int MAIN(void)
{
	int c;
	c = fibonacci(1);
	show(c);
	c = fibonacci(11);	
	show(c);
	c = fibonacci(80);
	show(c);

	for (int i = 1; fib[i] != 0; i++)
		printf("fib de %d = %ld\n", i, fib[i]);
	return 0;
}
