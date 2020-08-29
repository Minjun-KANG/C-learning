#include<stdio.h>
int bin(int *p, int dec[]);
int hex(int *p);
int oct(int *p);
void end();

int main()
{
	int input;
	int dec[32];
	int *p = &input;
	int menu;
	while (1)
	{
		printf("\n10 ������ �Է��Ͻÿ� : ");
		scanf("%d", p);

		printf("\n-----------------------------\n");
		printf("1. Hex\n");
		printf("2. Oct\n");
		printf("3. Bin\n");
		printf("4. exit\n");
		printf("\n-----------------------------\n");
		printf("menu�� �Է��Ͻÿ� : ");
		scanf("%d", &menu);

		switch (menu)
		{
		case 1:
			hex(p);
			break;
		case 2:
			oct(p);
			break;
		case 3:
			bin(p, dec);
			break;
		case 4 :
			printf("���α׷��� �����մϴ�.\n");
			end();
		default:
			printf("�߸��� ���� �Է��ϼ̽��ϴ�.\n");
			continue;
		}
		
	}
	

}
int hex(int *p)
{
	printf("16���� : %X\n", *p);
}
int oct(int *p)
{
	printf("8���� : %o\n", *p);
}
int bin(int *p, int dec[])
{
	int i = 0;
	for (int i = 0; i < 32; i++)
	{
		*(dec + 31 - i) = *p % 2;		//dec[31 - i];
		*p /= 2;	// *p = *p / 2;
	}
	printf("2���� : ");
	for (int j = 1; j < 5; j++) {
		for (i; i < 8*j; i++)
		{
			printf("%d", dec[i]);
			//if (!(i % 8) && i) // i==8*i
		}
		printf("  ");
	}
	
}
void end()
{
	exit(0);
}