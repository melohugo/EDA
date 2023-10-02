#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define show(n) printf("%d\n", n);
#define entrou printf("ENTROU\n");
#define swap(c1, c2) {int c = c1; c1 = c2; c2 = c;}
#define MAIN main

void troca(char *str, int len)
{
	if (len >= 0) {
		if (str[len] == 'x')
			str[len] = 'y';	
		troca(str, --len);
	}
		
}
int MAIN(void)
{
	char str[100];
	int len;

	scanf("%s", str);
	len = strlen(str);

	troca(str,len - 1);
	printf("%s\n", str);
	return 0;
}
