#include<stdio.h>
int ppoint(int *p);
int main()
{
	int a[5] = { 20,30,40,50,60 };
	ppoint(a);
}
int ppoint(int *p)
{
	for (int i = 0; i < 5; i++) {
		printf("%d\n", *(p + i));
	}
}