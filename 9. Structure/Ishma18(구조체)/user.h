#include<stdio.h>

struct user
{
	int age;
	int weight;
	int height;
}; struct user student1, student2, student3;

int compare(a,b,c)
{
	int max;
	if (a > b && a > c) {
		max = a;
	}else if (b > a && b > c) {
		max = b;
	}else if (c > b && c > a) {
		max = c;
	}
	return max;
}