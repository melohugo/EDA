#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define show(n) printf("%d\n", n);
#define entrou printf("ENTROU\n");
#define swap(c1, c2) {int c = c1; c1 = c2; c2 = c;}

int main(void)
{
	int n;
	
	scanf("%d", &n);

	int rg1[n][n];
	int rg2[n][n];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d ", &rg1[i][j]);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d ", &rg2[i][j]);
			printf("%d ", rg1[i][j] + rg2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
