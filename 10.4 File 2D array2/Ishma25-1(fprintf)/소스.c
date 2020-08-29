#include<stdio.h>

void func(FILE *fp);

main()
{
	char ch[5][100];// = { "This", "is", "C", "programming" };
	char ch1[5][100];
	int i = 0;

	FILE *fp = fopen("text.txt", "w");

	printf("Input sentence : ");
	for (int i = 0; i < 5; i++) {
		scanf("%[^\n]s", ch);
		//fscanf(stdout, "%s", ch);		//fscanf(stdin < cmd창에서 ) // fscanf(읽어올위치, 데이터서식, 저장할위치)
	}

	fprintf(fp, "%s\n", ch);		//fprintf(입력할위치, 입력할서식, 어딘가에 입력시켜줄 데이터를가지고있는 변수)
	fclose(fp);
	fp = fopen("text.txt", "r");


	/*while (fscanf(fp, "%s", ch1) != EOF)		//1차원배열로 저장해서 1차원배열 출력하기
	{
		printf("%s\n", ch1);
	}*/


	for (int i = 0; i < 5; i++) {			//2차원 배열직접출력
		fscanf(fp, "%s", ch1[i]);
		printf("%s\n", ch1[i]);
	}
}
