#include<stdio.h>
#include<string.h>

void counter(char name[][10], char d);

int main()
{
	int i;
	char name[3][10] = {0};
	char d;

	printf("Please Input an alphabet for searching : ");  // ������������ �𸣰����� �̰� ���ڿ��� �Է��� �Ŀ� 
	scanf("%c", &d);									// ������ĺ����� �Է¹�������.

	printf("Please Input your name : "); // �̷��� �ϸ� Ÿ�����ϴ� Ƚ���� 1���ε� �迭�� ������ ��
	for (i = 0; i < 3; i++) {            // = {"Kang","Min","Jun"} �� ���� ��
		scanf("%s", name[i]);
	}
	counter(name,d);
}

void counter(char name[][10], char d)
{
	int sum=0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < strlen(name[i]); j++) {
			if (name[i][j] == d) {
				sum = sum + 1;
			}
		}
	}
	printf("%c : %d\n", d, sum);

	for (int i = 0; i < 3; i++) {
		int j = strlen(name[i]);
		printf("row%d - %d\n", i, j);
	}

}