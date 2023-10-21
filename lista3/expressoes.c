#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#define show(n) printf("%c\n", n);
#define entrou printf("ENTROU\n");
#define swap(c1, c2) {int c = c1; c1 = c2; c2 = c;}
#define MAIN main

int p;

void empilha(char *str, int x)
{
	str[p++] = x;
}

void desempilha()
{
	p--;
}

char espia(char *str)
{
	return str[p - 1];
}

int compara(char c, char x)
{
	if (c == '(' && x == ')')
		return 1;
	if (c == '[' && x == ']')
		return 1;
	if (c == '{' && x == '}')
		return 1;
	
	return 0;
}

int MAIN(void)
{
	char *str;
	char res[21];
	int n, c;

	scanf("%d\n", &n);
	str = malloc(sizeof(char)*100001);

	for (int i = 0; i < n; i++) {
		p = 0;
		while ((c = getchar()) != '\n') {
			if (compara(espia(str), c))
				desempilha();
			else
				empilha(str, c);		
		}

		if (p == 0)
			res[i] = 'S';
		else
			res[i] = 'N';
	}

	for (int i = 0; i < n;i++)
		show(res[i]);
	return 0;
}
