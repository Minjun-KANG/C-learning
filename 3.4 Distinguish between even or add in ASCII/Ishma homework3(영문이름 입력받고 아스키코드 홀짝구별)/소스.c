#include<stdio.h>

int main()
{
	char ch = ' ';
	char name[20] = { 0 };
	int j = 0, i = 0, k = 0;
	printf("Please type your name : \n");

	while (ch != '\n')
	{
		ch = getchar();
		name[j] = ch;
		k = name[j];
		if (name[j] != ' '&&name[j] != '\n') {
			if (k % 2 == 0) {
				printf("%c - %d - EVEN\n", name[j], k);
			}
			else if (k % 2 == 1) {
				printf("%c - %d - ODD\n", name[j], k);
			}
		}
		j++;
	}
}
