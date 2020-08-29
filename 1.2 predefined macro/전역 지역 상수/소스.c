#include<stdio.h>

int b = 20;

#define MAX ((a)+(b))

int main()
{
	int a = 10;

	printf("%d\n", a);
	printf("%d\n", b);
	func();
}
int func()
{
	int a = 10, b= 20;
	printf("%d\n", MAX);
}