#include<stdio.h>

main()
{
	int a, b, c, d;
	a = 15;
	b = 10;
	c = ++a - b;	// a +1 �� a�� �����ϸ� 16 ���� -b �ؼ� c �� 10

	printf("a = %d b =%d c = %d\n", a, b, c); // 16 10 6
	d = b++ + a;	//b + a �� �ؼ� d �� 26�����ϰ� b�� ++�ؼ� 11 

	printf("a = %d b =%d c = %d\n", a, b, d); // 16 11 26 
	printf("a/b = %d\n", a / b); //1
	printf("a%%b = %d\n", a % b); //5
	printf("a*=b = %d\n", a *= b); //176 //a = a * b;
	printf("%d\n", (c > d) ? 1 : 0);
	printf("%d\n", (c < d) ? 1 : 0);
}