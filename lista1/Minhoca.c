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
	int l, c;
	int maiorl, maiorc;

	maiorl = maiorc = INT_MIN;
	scanf("%d %d ", &l, &c);

	int vet[l][c];
	int sl[1000] = {0};
	int sc[1000] = {0};
	
	for (int i = 0; i < l; i++)
		for (int j = 0; j < c; j++) {
			scanf("%d ", &vet[i][j]);
			sl[i] += vet[i][j];
			sc[j] += vet[i][j];
		}

	for (int i = 0; i < l; i++)
		maiorl = maiorl < sl[i] ? sl[i] : maiorl;	

	for (int i = 0; i < l; i++)
		maiorc = maiorc < sc[i] ? sc[i] : maiorc;	

	printf("%d\n", maiorc > maiorl ? maiorc : maiorl);
	return 0;
}
