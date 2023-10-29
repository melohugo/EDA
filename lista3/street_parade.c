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

void le_vetor(int *vet, int len)
{
	int c;

	for (int i = 0;i < len ; i++) {
		scanf("%d", &c);
		vet[i] = c;
	}
}

int MAIN(void)
{
	int *str, *ordem, *p;
	int n, c, i, u;


	str = malloc(sizeof(int)*1001);
	ordem = malloc(sizeof(int)*1001);
	p = malloc(sizeof(int)*1001);

	while (scanf("%d", &n), n != 0) {
		le_vetor(str, n);
		i = u = 0;
		c = 1;
		while (i < n) {
			while (u > 0 && p[u - 1] == c) {
				c++;
				u--;
			}
			if (str[i] == c) 
				c++;
			else 
				p[u++] = str[i];
			i++;
		}
		u--;
		while (u > 0 && p[u] == c) {
			c++;
			u--;
		}
		if (n == 1)
			c = 1;
		printf("%s\n", c == n ? "yes" : "no");
	}
	return 0;
}
