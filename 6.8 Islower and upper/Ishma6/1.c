#include<stdio.h>
#include<ctype.h>

int main()
{
	int i, j=0;
	char name[20], a=0;
	printf("Enter at your name : ");
	while (a != '\n')
	{
		a = getchar();
		name[j] = a;
		j++;
	}

	if (islower(name[0])) {
		for (i = 0; i <= j; i++)
			putchar(toupper(name[i]));
	}
	else if (isupper(name[0])) {
		for (i = 0; i <= j; i++)
			putchar(tolower(name[i]));
	}
}