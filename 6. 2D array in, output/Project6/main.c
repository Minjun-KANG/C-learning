#include<stdio.h>

int main()
{
	char name[20];
	int num[3]= {0};
	
	int num2[2][3] = { 1,2,3,4,5,6};			//변수선언
	
	scanf("%[^\n]s", name);			// 이렇게 입력받는것은 \n제외하고 전부입력받으라는 말.
	printf("%s\n", name);
	printf("\n\n");						//변수 입력받음

	for (int i = 0; i < 6; i++) {		//char형 배열 한글자씩 아스키코드로 출력
			printf("%d\n", name[i]);
	}
	printf("\n\n");

	printf("1차원 배열\n");
	for (int i = 0; i < 3; i++) {			//1차원 배열개념
		printf("%d\t",num[i]);
	}
	printf("\n\n");
	
	printf("2차원배열\n");
	for (int i = 0; i < 2; i++)				//2차원 배열개념
	{
		for (int j = 0; j < 3; j++) {
			printf("%d\t", num2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}