#include<stdio.h>

int main()
{
	int a;
	printf("���� ���� �Է��Ͻÿ� : ");
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