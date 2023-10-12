#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define show(n) printf("%d\n", n);
#define showc(n) printf("%c\n", n);
#define entrou printf("ENTROU\n");
#define swap(c1, c2) {int c = c1; c1 = c2; c2 = c;}
#define MAIN main

char str_[1000];
char sub_[1000];
int len_;

int fim(char *str, char *sub, int len_sub, int i)
{
	if (len_sub < 0) 
		return ++i;
	else 
	if (*str == *sub)
		fim(--str, --sub, --len_sub, --i);
	else
	if (*str == sub_[len_ - 1])
		fim(--str, &sub_[len_ - 2], len_ - 2, --i);
	else
		fim(--str, &sub_[len_ - 1], len_ - 1, --i);
}

int inicio(char *str, char *sub, int i)
{
	if (*sub == '\0')
		return i;
	else
	if (*str == '\0')
		return -1;
	else 
	if (*str == *sub)
		inicio(++str, ++sub, ++i);
	else
	if (*str == *sub_)
		inicio(++str, sub_ + 1, ++i);
	else
		inicio(++str, sub_, ++i);
}

int MAIN(void)
{
	int inicio_, fim_;
	int len_str;

	scanf("%s", str_);
	scanf("%s", sub_);
	
	len_str = strlen(str_);
	len_ = strlen(sub_);

	if (len_ == 0) {
		show(0);
		return 0;
	}

	inicio_ = inicio(str_, sub_, 0);

	if (inicio_ != -1)
		fim_ = fim(&str_[len_str - 1], &sub_[len_ - 1], len_ - 1, len_str);
	else{
		printf("0\n");
		return 0;
	}

	printf("%d\n", (fim_ - inicio_) - 1 + 2*len_);
	return 0;
}
