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
	temp = *a;	// x변수의 주소 a에 대입, y변수의 주소 b에 대입 b안에 들어있는 주솟값 변수에 내용물을 a의 주소안 내용물 대입
	*a = *b;
	*b = temp;
	printf("swap : %d\n%d", *a, *b);

}