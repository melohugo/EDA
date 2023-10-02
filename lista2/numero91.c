#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define show(n) printf("%d\n", n);
#define entrou printf("ENTROU\n");
#define swap(c1, c2) {int c = c1; c1 = c2; c2 = c;}

int f91(int n)
{
	if (n >= 101)
		return n - 10;
	else
		return f91(f91(n + 11));
}
int main(void)
{
	int c;

	while (scanf("%d", &c), c != 0) 
		printf("f91(%d) = %d\n", c, f91(c));

	return 0;
}
