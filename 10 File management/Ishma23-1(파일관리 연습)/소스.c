#include<stdio.h>

void func(FILE * fp);

main()
{
	FILE *fp = fopen("text.txt", "w");					//fp�� �ּҸ��ְ� �峭ġ�°Ű��� �Ƹ�
	char data[100];

	char c;

	// �����͸� ��ȯ�ϱ� ������ ���н� NULL�� ��ȯ�մϴ�.
	if (fp == NULL)
	{
		printf("faild \n");
	}
	
	/*printf("Input data : ");
	fscanf(stdin, "[^\n]%s", data);
	fprintf(fp, "%s" , data);  // �ܺ� ���Ͽ� �����͸� �� �� ����*/

	while ((c = getchar()) != EOF) {
		putc(c, fp);
	}
	fclose(fp);
	fp = fopen("text.txt","r");
	func(fp);
}

void func(FILE *fp)
{
	char c[100];
	int i = 0;
	int space = 1;
	int ch = 0;

	// �ѱ��ھ� �о ȭ������ ���
	while ((c[i] = getc(fp)) != EOF)
	{
		printf("%c", c[i]);
		if (c[i] != ' ') {
			ch++;
		}
		else if (c[i] == ' ') {
			space++;
		}
		i++;
	}
	printf("\n");
	printf("char : %d\n", ch-1);
	printf("word : %d\n", space);


	fclose(fp);
}