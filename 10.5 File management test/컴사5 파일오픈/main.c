#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	FILE *fp;
	char str[256]="Hi!";
	fp = fopen("myfile.txt", "w"); // r �б�, w ����

	/*if(!fp){ // !fp < ���� ������ �������� ����
		printf("FILE open Error");
		exit 0; //stdlib.h ���Ͽ� ����
	}*/

	fscanf(fp, "%s", str);		//fp �� �о str�� ��������
	printf("%s\n", str);
	//fprintf(fp "%s", str);  �̷��� ���Ͽ� �Էµ� 
	fclose(fp);
}
//������ ������ ��¼��? fp = NULL �� ���� �׷��� fscanf���� ������
// �׷� myfile.txt �� �����? ��� ����. Ŀ��Ʈ ���͸������ main.c �� �ִ� ����
//12.5 12.6 �ΰ� ������ѰŰ���
// 12.7