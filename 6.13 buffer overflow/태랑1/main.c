#include<stdio.h>

int main()
{
	char buffer;
	int menu;
	char name[20];
	char number[13];
	int score;
	
	

	printf("-----------menu----------\n");
	printf("1.�Է�\n");
	printf("2.���\n");
	printf("3.����\n");
	printf("-------------------------\n");
	printf("�޴��� �Է��Ͻÿ� : ");
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

