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

void ultra(int *p,int min,int soma, int len)
{
	if (len > 0) {
		int c = *p;
		int s;

		s = soma + c;
		if (s <= min)
			ultra(++p, min, s, --len);
		if (s > min) {
			ultra(++p, min, 0, --len);
			printf("%d\n", c);
		}
	}
}

int MAIN(void)
{
	int c, min, i;
	int *v = malloc(sizeof(int));
	
	for (i = 1;scanf("%d", &c), c != 0; i++) {
		v[i - 1] = c;
		v = realloc(v, sizeof(int)*(i + 1));
	}

	scanf("%d", &min);
	ultra(v, min, 0, i - 1);
	return 0;
}
