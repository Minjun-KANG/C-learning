#include<stdio.h>
#include<string.h>


int counter(a,j);

int main()
{

	char name[3][10] = { "Kang","Min","Jun" };
	int i, j = 0;
	int a;

	for (i = 0; i < 3; i++) {
		a = strlen(name[i]);
		counter(a,j);
		
		j = 0;
	}

	
}
int counter(a,j)
{
	while (a > j) {
		j++;
	}
	printf("%d\n", j);
}