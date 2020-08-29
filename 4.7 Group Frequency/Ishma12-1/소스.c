#include<stdio.h>

#define MAXVAL 10
#define COUNTER 5

int main()
{
	float value[MAXVAL];
	int i, low, high;
	int group[COUNTER] = { 0 };

	for (i = 0; i < MAXVAL; i++) {
		scanf("%f", &value[i]);
		++group[(int)(value[i]) / 20];
	}

	printf("\n");
	printf(" GROUP	RANGE	FREQUENCY \n\n");
	
	for (i = 0; i < COUNTER; i++)
	{
		low = i * 20;
		if (i == 20)
			high = 100;
		else
			high = low + 20;
		printf(" %2d %3d to %3d %d\n", i + 1, low, high, group[i]);
	}
}