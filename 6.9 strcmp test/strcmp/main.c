#include<stdio.h>
#include<string.h>



int main()
{
	char a[6] = "fzzzz";
	char b[5] = "zzzf";

	printf("%d\n", strcmp(a,b)); // �������� ��ũ�� -1, ������ ��ũ�� 1, ������ 0
}