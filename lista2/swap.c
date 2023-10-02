#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define show(n) printf("%d\n", n);
#define entrou printf("ENTROU\n");
#define SWAP(c1, c2) {int c = c1; c1 = c2; c2 = c;}

void swap (int * a , int * b ) 
{
	SWAP(*a,*b);
}
