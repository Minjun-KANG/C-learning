#include<stdio.h>


void func1(int *ptr);

void main() 
{
	int x[5] = { 10,20,30,40,50 };
	func1(x);
}

void func1(int *ptr)
{
	int sum=0;

	for (int i = 0; i <= 4; i++) {
		sum = sum + *(ptr+i);
	}
	printf("sum : %d\nAvg : %d\n", sum, sum / 5);
}