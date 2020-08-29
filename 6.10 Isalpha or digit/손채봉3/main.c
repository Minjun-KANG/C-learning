#include<stdio.h>
#include<ctype.h>

int main()
{
	char c;
	printf("Press any key \n");
	c = getchar();
	if (isalpha(c) > 0) {
		printf("The character is a letter.\n");
	}else{
		if (isdigit(c) > 0) {
			printf("The character is a digit.\n");
		}
		else
		{
			printf("The character is not alphanumric.\n");
		}

	}

}