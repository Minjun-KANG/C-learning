#include<stdio.h>

int main() 
{
	int a, sum=0;
	printf("Input number : ");
	scanf("%d", &a);
	sum = a;
	for (int i = 1; i <= a; i++) {
		sum = sum + (a - i);
	}
	printf("%d\n", sum);
}