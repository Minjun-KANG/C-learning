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
		//fscanf(stdout, "%s", ch);		//fscanf(stdin < cmdâ���� ) // fscanf(�о����ġ, �����ͼ���, ��������ġ)
	}

	fprintf(fp, "%s\n", ch);		//fprintf(�Է�����ġ, �Է��Ҽ���, ��򰡿� �Է½����� �����͸��������ִ� ����)
	fclose(fp);
	fp = fopen("text.txt", "r");


	/*while (fscanf(fp, "%s", ch1) != EOF)		//1�����迭�� �����ؼ� 1�����迭 ����ϱ�
	{
		printf("%s\n", ch1);
	}*/


	for (int i = 0; i < 5; i++) {			//2���� �迭�������
		fscanf(fp, "%s", ch1[i]);
		printf("%s\n", ch1[i]);
	}
}
