#include<stdio.h>

int main()
{
	int a,b;
	scanf("%d %d", &a,&b);

	if (b > a)
		printf("b�� a���� ũ��\n");
	else if ( a > b)
		printf("a�� ��ũ��\n");
	else if(a==b)
		printf("���� ����\n");
}