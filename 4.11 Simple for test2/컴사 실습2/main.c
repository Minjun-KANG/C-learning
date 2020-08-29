#include<stdio.h>

int main()
{
	int a;
	printf("정수 값을 입력하시오 : ");
	scanf("%d", &a);

	for (int j = 1; j <= a; j++)
	{
		for (int i = 1; i <= j; i++)
		{
			printf("*");
		}
		printf("\n");
	}
}