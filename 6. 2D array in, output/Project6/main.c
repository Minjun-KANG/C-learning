#include<stdio.h>

int main()
{
	char name[20];
	int num[3]= {0};
	
	int num2[2][3] = { 1,2,3,4,5,6};			//��������
	
	scanf("%[^\n]s", name);			// �̷��� �Է¹޴°��� \n�����ϰ� �����Է¹������ ��.
	printf("%s\n", name);
	printf("\n\n");						//���� �Է¹���

	for (int i = 0; i < 6; i++) {		//char�� �迭 �ѱ��ھ� �ƽ�Ű�ڵ�� ���
			printf("%d\n", name[i]);
	}
	printf("\n\n");

	printf("1���� �迭\n");
	for (int i = 0; i < 3; i++) {			//1���� �迭����
		printf("%d\t",num[i]);
	}
	printf("\n\n");
	
	printf("2�����迭\n");
	for (int i = 0; i < 2; i++)				//2���� �迭����
	{
		for (int j = 0; j < 3; j++) {
			printf("%d\t", num2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}