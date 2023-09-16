#include <stdio.h>

char *ft_strrev(char *str)
{
	int len, c, i;

	len = 0;
	for (int j = 0;str[j] != '\0'; j++)
		len++;

	for (i = 1; i <= len / 2; i++) {
		c = str[i - 1];
		str[i - 1] = str[len - i];
		str[len - i] = c;	
	}
	str[len] = '\0';
	return str;
}


int main(void)
{
	char str[1001];
	char *p;

	scanf("%s", str);
	p = ft_strrev(str);
	printf("%s\n", p);
	return 0;
}
