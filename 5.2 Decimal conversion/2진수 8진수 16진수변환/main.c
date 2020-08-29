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
		printf("\n10 진수를 입력하시오 : ");
		scanf("%d", p);

		printf("\n-----------------------------\n");
		printf("1. Hex\n");
		printf("2. Oct\n");
		printf("3. Bin\n");
		printf("4. exit\n");
		printf("\n-----------------------------\n");
		printf("menu를 입력하시오 : ");
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
			printf("프로그램을 종료합니다.\n");
			end();
		default:
			printf("잘못된 값을 입력하셨습니다.\n");
			continue;
		}
		
	}
	

}
int hex(int *p)
{
	printf("16진수 : %X\n", *p);
}
int oct(int *p)
{
	printf("8진수 : %o\n", *p);
}
int bin(int *p, int dec[])
{
	int i = 0;
	for (int i = 0; i < 32; i++)
	{
		*(dec + 31 - i) = *p % 2;		//dec[31 - i];
		*p /= 2;	// *p = *p / 2;
	}
	printf("2진수 : ");
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