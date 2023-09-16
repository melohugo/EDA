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
	int n, instancia, nota, repn;
	char rep[100];
	char vet[100];

	instancia = 1;

	while (scanf("%d", &n) != EOF) {
		repn = 11;
		for (int i = 0; i < n; i++) {
			scanf("%s %d", vet, &nota);
			if (nota < repn) {
				strcpy(rep, vet);
				repn = nota;
			}
			if (nota == repn) {
				if (strcmp(rep, vet) > 0)
					;
				else {
					strcpy(rep, vet);
					repn = nota;
				}
			}
		}
		printf("Instancia %d\n%s\n\n", instancia, rep);
		instancia++;
	}
	return 0;
}
