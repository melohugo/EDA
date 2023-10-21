#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define show(n) printf("%d\n", n);
#define entrou printf("ENTROU\n");
#define swap(c1, c2) {int c = c1; c1 = c2; c2 = c;}
#define MAIN main

char pilha[1001];
int p;

void empilha()
{
	int c;

	if ((c = getchar()) != '\n') {
		pilha[p++] = c;
		empilha();
	}
}

void desenpilha()
{
	putchar(pilha[p--]);
}

int MAIN(void)
{
	empilha();
	
	p--;
	while (p >= 0)
		desenpilha();

	printf("\n");
	return 0;
}
