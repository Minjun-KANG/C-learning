#include<stdio.h>

int main() {

	int a[3];
	float sum=0;
	for (int i = 0; i < 3; i++)
	{
		printf("%d��° �����Դ� ? : ",i);
		scanf("%d", &a[i]);
		sum = sum + a[i];
	}

	printf("������ ��հ� : %f", sum/3);
}