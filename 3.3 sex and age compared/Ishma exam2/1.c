#include<stdio.h>

int main()
{
	char a;
	int b;
	printf("Male or Female? [M or F] : ");
	scanf("%c", &a);
	printf("your age? : ");
	scanf("%d", &b);

	if (a=='M')
	{
		if (b < 17)
		{
			printf("you are boy!\n");
		}
		else
		{
			printf("you are man!\n");
		}
	}
	else
	{
		if (b < 17)
		{
			printf("you are girl!\n");
		}
		else
		{
			printf("you are woman!\n");
		}
	}
}







/*���ڴ� 'M' ���ڴ� 'F'�� ��Ÿ����� �ϰ� 18�� �̻��� �����̶�� ����.
����('M', 'F')�� ���̸� �Է¹޾� "MAN"(���γ���), "WOMAN"(���ο���), "BOY"(�̼��Ⳳ��), 
"GIRL"(�̼��⿩��)�� �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/