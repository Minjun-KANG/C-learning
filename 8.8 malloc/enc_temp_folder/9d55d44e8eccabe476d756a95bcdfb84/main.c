#include<stdio.h>
#include<stdlib.h>


void func1(int *p);
main() 
{
	int x;
	int *p;
	int sum;
	printf("size : ");
	scanf("%d", &x);

	p = (int*)malloc(sizeof(int)*x);
	
	for (int i = 0; i < x; i++) {
		printf("input %d number : ", i);
		scanf("%d", &*p);

	}
	func1(*p);
}


void func1(int *p)
{
	int sum = 0;
	int *sum1;

	for (int i = 0; i <= 4; i++) {
		sum = sum + *(p + i);
	}
	sum1 = &sum;
	printf("sum : %d\n", *sum1);
	printf("address %x", sum1);
}


