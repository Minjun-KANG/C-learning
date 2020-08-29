#include<stdio.h>
int main()
{

	int i, j;

	for (i = 1; i < 100; i++)
	{
		printf("%d", i);
		for (j = 2; j <= i; j++) {
			if (i % j == 0)
				break;
		}
		if (i == j)
			printf("%d\n", i);
	}
	return 0;
}

