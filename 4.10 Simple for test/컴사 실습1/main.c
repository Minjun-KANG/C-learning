#include<stdio.h>

/*int main()
{
	/*int a;							//problem #1
	printf("단수를 입력하시오 : ");
	scanf("%d", &a);

	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n",a, i, a*i);
	}*/
/*
int main()
{
	int a;
	printf("정수 값을 입력하시오 : ");
	scanf("%d", &a);
	
	for (int j = 1; j <= a; j++)
	{
		for (int i = 1; i <= j; i++) 
		{
			printf("*");
		}
		printf("\n");
	}
}
*/
/*
int main()
{
	int a;
	printf("정수 값을 입력하시오 : ");
	scanf("%d", &a);

	for (int i = a; i >= 1; i--){
		for (int j = a; j > a-1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}*/

int main()
{
	int a, j,k;
	printf("정수값 입력 : ");
	scanf("%d", &a);

	for (int i = 1; i <= a; i++)
	{
		for (j = 1; j <= a-i; j++) {
			printf("*");
		}
		for (k = i; k > 0; k--) {
			printf("%d", k);
		}
		printf("\n");
	}
}