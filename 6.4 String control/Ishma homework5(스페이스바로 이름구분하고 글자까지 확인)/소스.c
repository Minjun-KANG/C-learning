#include<stdio.h>

int main()
{
	char ch = ' ';
	char name[20] = {0};
	char str[10] = {0};
	int i, j = 0, sp1 = 0, sp2 = 0, sp3 = 0, n,m;
	printf("Input the name: \n");


	while (ch != '\n')
	{
		ch = getchar();
		name[j] = ch;
		j++;
		if (ch == ' ' && sp3 == 0)
		{
			sp1 = j;
			sp3++;
		}
		if (ch == ' ')
		{
			sp2 = j;
		}

	}
	printf("Input the numbers: ");
	scanf("%d %d", &n, &m);
	switch (n)
	{
	case 1:
		printf("The name you select is ");
		for (i = 0; i < sp1 - 1; i++)
		{
			putchar(name[i]);
			str[i] = name[i];
		}
		printf("\nThe letter you select in name %s is ", str);
		putchar(str[m - 1]);
		//putchar(name[m - 1]);
		printf("\n");
		break;
	case 2:
		printf("The name you select is ");
		for (i = sp1; i < sp2-1; i++)
		{
			putchar(name[i]);
			str[i-sp1] = name[i];
		}
		printf("\nThe letter you select in name %s is ", str);
		//putchar(name[sp1 + m - 1]);
		putchar(str[m-1]);
		printf("\n");
		break;
	case 3:
		printf("The name you select is ");
		for (i = sp2; i <= j-2; i++)
		{
			putchar(name[i]);
			if(name[i]!='\n')
			str[i-sp2] = name[i];
		}
		printf("\nThe letter you select in name %s is ",str);
		//putchar(name[sp2 + m - 1]);
		putchar(str[m - 1]);
		printf("\n");
		break;

	default:
		printf("ERROR\n");
		break;
	}
}