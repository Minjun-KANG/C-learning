#include<stdio.h>

char names(char a[]);		// �Լ� ����(function declaration)
 
int main()
{
	 char name[10];			// �Ѱ� �� ���� name ����
	 scanf("%[^\n]s", name);	//name�� ���Է�

	 names(name);			// �Լ� ���(fuction call)

}
char names(char a[])		// �Լ� ����(function define)
{
	printf("%s\n", a);		// names ��� �̸��� ���� �Լ��� �ϴ� ����
}