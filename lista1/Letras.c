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
	char str[10001];
	char c;
	float palavras, contem, existe;
	
	contem = existe = palavras = 0;
	
	scanf("%c\n", &c);
	fgets(str, 10001, stdin);

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == ' ' || str[i] == '\n') {
			palavras++;
			if (existe)
				contem++;
			existe = 0;
		}
		if (str[i] == c)
		       existe = 1;	
	}	

	printf("%.1f\n", (contem/(float)palavras)*100.0);
	return 0;
}
