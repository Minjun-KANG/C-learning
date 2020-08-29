#include<stdio.h>

int main(void) {
	char str[10] = { 'D','F','I','C','A','G','H','B','J','E' };
	
	char temp;
	printf("정렬 전 : ");
	for (int i = 0; i <= 9; i++) {
		printf("%c", str[i]);
	}

	for (int i = 0; i <= 9; i++) {
		for (int j = i; j <= 9; j++) {
			if (str[i] > str[j]) {
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	printf("\n정렬 후 : ");
	for (int i = 0; i <= 9; i++)
		printf("%c", str[i]);
	printf("\n");
}