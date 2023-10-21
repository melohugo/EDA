#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#define show(n) printf("%d\n", n);
#define entrou printf("ENTROU\n");
#define swap(c1, c2) {int c = c1; c1 = c2; c2 = c;}
#define MAIN main

int MAIN(void)
{
	int *p;
	int cont;
	int andar;
	int f, s, g, u, d;

	scanf("%d %d %d %d %d", &f, &s, &g, &u, &d);

	p = malloc(sizeof(int)*f);
	cont = 0;
	andar = s;
	
		
	if (u != 0)
		for (; andar < g && andar < f; cont++) 
			andar += u;
	
	if (d != 0)
		for (; andar > g && andar > 0; cont++)
			andar -= d;
		
	if (u != 0)
		for (; andar < g && andar < f; cont++) 
			andar += u;
	

	if (andar == g)
		printf("%d\n", cont);
	else
		printf("use the stairs\n");
	
	return 0;
}
