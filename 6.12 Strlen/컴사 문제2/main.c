#include<stdio.h>

my_strlen(char str[]);

int main(void) {
	char str[100] = {0};
	scanf("%[^\n]s", str);

	printf("string length : %d ", my_strlen(str));
}

my_strlen(char str[])
{
	int i=0;
	while (str[i])
		i++;
	return i;
}