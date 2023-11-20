#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#define show(n) printf("%d\n", n);
#define entrou printf("ENTROU\n");
#define swap(c1, c2) {int c = c1; c1 = c2; c2 = c;}
//#define MAIN main

int l = 0;

int menor_ (int *vet, int l, int n, int menor)
{
	if (l < n) {
		if (vet[l] < vet[menor])
			menor = l;
		return menor_(vet, ++l, n, menor);
	}
	return menor;
}

void ordena (int *v, int n)
{
        int menor;
	if (l < n) {
		menor = menor_(v, l, n, l);
                if (l != menor)
                        swap(v[menor], v[l]);
 	
		l++;
		ordena(v, n);
	}
	else {
		l = 0;
	}
}

int MAIN(void)
{
	int vet[10] = {7, 3, 2, 5, 4, 3};
	int vet2[10] = {9, 4, 3, 6, 5, 4};
	ordena(vet, 6);

        for (int i = 0; i < 6; i++)
                printf("%d%c", vet[i], i + 1 == 6 ? '\n' : ' ');

	ordena(vet2, 6);

        for (int i = 0; i < 6; i++)
                printf("%d%c", vet2[i], i + 1 == 6 ? '\n' : ' ');


	return 0;
}
