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
	int n, m, a, k;
	int tm, ta, tk;
	char str[1001];

	tm = ta = tk = 0;

	scanf("%d %d %d %d ", &n, &m, &a, &k);
	scanf("%s", str);

	for (int i = 0; i < strlen(str); i++) {
		if (isdigit(str[i]))
			tk++;
		else
		if (islower(str[i]))
			tm++;
		else
			ta++;
	}

	if (tk >= k && tm >= m && ta >= a && strlen(str) >= n)
		printf("Ok =/\n");
	else
		printf("Ufa :)\n");
	return 0;
}
