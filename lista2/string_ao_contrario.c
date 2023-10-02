#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define show(n) printf("%d\n", n);
#define entrou printf("ENTROU\n");
#define swap(c1, c2) {char c = c1; c1 = c2; c2 = c;}
#define MAIN main

void rev(char *str, int i, int x)
{
	if (x > i) {
		swap(str[i], str[x]);
		rev(str, ++i, --x);
	}
}

int MAIN(void)
{
	char str[1000];
	int len;

	scanf("%s", str);
	len = strlen(str);
	rev(str, 0, len - 1);

	printf("%s\n", str);
	return 0;
}
