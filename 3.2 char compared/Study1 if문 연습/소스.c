#include<stdio.h>

int main()
{
	int a, c;
//	scanf("%[^\n]c %[^\n]c", &a, &c);
	scanf("%c",&a);
	c = 0;
	scanf("%c", &c);

	if (a>c) {
		printf("%c�� %c���� Ů�ϴ�.\n", a, c);
	}
	else if (a<c) {
		printf("%b�� %a���� Ů�ϴ�.\n", a, c);
	}
	else {
		printf("�� ���ڴ� �����ϴ�.");
	}
}