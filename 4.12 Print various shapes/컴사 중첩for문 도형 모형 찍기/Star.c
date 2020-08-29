#include<stdio.h>
#include"define.h"


int Star(int length)
{
	int space_length = length * 3 - 2;
	int i = 0;
	for (int star = 0; star < length; star++) {
		for (int space = 1; space < space_length; space++) {
			printf(" ");
		}
		printf("¡Ù");
		printf("\n");
		++space_length;
		
		/*i *= 2;
		for (int j = 0; j < i; j++)
			printf(" ");
		printf("¡Ù");*/
	}
	
	

}