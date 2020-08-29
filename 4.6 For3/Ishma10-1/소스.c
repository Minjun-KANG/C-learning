#include<stdio.h>

int main(void)
{
	//int a;
	int b,c;
	//printf("ธ๎มู? : ");
	//scanf("%d", &a);

	for (b = 2; b <= 5; b++) {
		for (c = 0; c<b; c++) {
			printf("*");
		}
		printf("\n");
	}
}