#include<stdio.h>

int main()
{
	int a = 2;
	float b = 3.0;
	double c = 5.0;
	int sum = 0;

	printf("%d\n", a << 1);
	printf("%d\n", a >> 1);

	b = c / a; // �ڵ�����ȯ
	printf("%f\n", b);

	b = (int)c / a; // (type) ����ȯ
	printf("%f\n", b);

	a = c / b; // 0 ��� ��Ʈ������ %f�� ��ºҰ�
	printf("%f\n", a);

	b = 3.0;
	c = 5.0;
	b = (int)c / (int)b; // 
	printf("\t%f\n", b);

	printf("%f\n", (int)c);
	//�߷� %f �� int ��� �������ϸ� 0 ����
	sum = sizeof(c);
	printf("%d\n" ,sizeof(c));

	int x, y, z;

	/*scanf("%d %*d %d", &x, &y, &z); // 123 456 789
	printf("%d%d%d\n", x, y, z); // 123789 �����Ⱚ ���*/

	char address[80];
	scanf("%[a-z]", address);
	printf("%-80s\n\n", address);

	a = 0;

	do
	{
		printf("*");
		a++;
	} while (a < 10);
	{
		putchar('\n');
	}


}