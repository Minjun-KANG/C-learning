#include<stdio.h>

struct student
{
	char name[10];
	int number;
};
int main()
{
	struct student a;
	printf("input : name number ");
	scanf("%s", &a.name);
	scanf("%d", &a.number);

	printf("\n");
	printf("%s, %d", a.name, a.name);
}