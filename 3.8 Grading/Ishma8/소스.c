#include<stdio.h>

int main()
{
	int j[5];
	float h=0;
	int a = 0, b = 0, c = 0, f = 0;
	int i=0;
	for (i = 0; i < 5; i++)
	{
		printf(" %d번째 점수를 입력하세요 : ", i);
		scanf("%d", &j[i]);
		h = h + j[i];
		if (100>=j[i]&&j[i]>=80)
		{
			a++;
		}
		else if (80 > j[i] && j[i] >= 60)
		{
			b++;
		}
		else if (60 > j[i] && j[i] >= 40)
		{
			c++;
		}
		else if (40 > j[i] && j[i] >= 0)
		{ 
			f++;
		}
	}
	

	printf(" A : %d\n B : %d\n C : %d\n F : %d\n AVG : %0.2f", a, b, c, f, h/5);
}