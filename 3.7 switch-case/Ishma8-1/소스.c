#include<stdio.h>

int main()
{
	char a;
	printf("How's the weather? please input an large alphabet\n-----list-----\n HOT : H\n COLD : C\n RAIN : R\n");
	scanf("%c", &a);

	switch (a)
	{
	case 'C':
		printf("Wear thick clothes because of the cold weather.\n");
		break;
	case 'H':
		printf("You drink more water because of the hot weather.\n");
		break;
	case 'R':
		printf("Take your umbrella.\n");
		break;
	default:
		printf("ERROR\n");
		break;
	}
}