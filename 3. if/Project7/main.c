#include<stdio.h>

int main()
{
	int a,b;
	scanf("%d %d", &a,&b);

	if (b > a)
		printf("b는 a보다 크다\n");
	else if ( a > b)
		printf("a가 더크다\n");
	else if(a==b)
		printf("둘이 같다\n");
}