0#include<stdio.h>

void swap(int *a, int *b);

main()
{
	int x = 20, y = 10;
	swap(&x, &y);
	printf("main : %d\n%d",x, y);
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;	// x������ �ּ� a�� ����, y������ �ּ� b�� ���� b�ȿ� ����ִ� �ּڰ� ������ ���빰�� a�� �ּҾ� ���빰 ����
	*a = *b;
	*b = temp;
	printf("swap : %d\n%d", *a, *b);

}