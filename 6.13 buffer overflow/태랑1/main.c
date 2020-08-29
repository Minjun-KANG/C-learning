#include<stdio.h>

int main()
{
	char buffer;
	int menu;
	char name[20];
	char number[13];
	int score;
	
	

	printf("-----------menu----------\n");
	printf("1.입력\n");
	printf("2.출력\n");
	printf("3.종료\n");
	printf("-------------------------\n");
	printf("메뉴를 입력하시오 : ");
	scanf("%d", &menu);
	while (buffer = getchar() != '\n' && buffer != EOF);

	printf("name : ");
	scanf("%[^\n]s", name);
	while (buffer = getchar() != '\n' && buffer != EOF);

	printf("number : ");
	scanf("%[^\n]s", number);
	while (buffer = getchar() != '\n' && buffer != EOF);

	printf("score : ");
	scanf("%d",&score);
}

