#include<stdio.h>

main()
{
	int a, b, c, d;
	a = 15;
	b = 10;
	c = ++a - b;	// a +1 을 a에 대입하면 16 에서 -b 해서 c 는 10

	printf("a = %d b =%d c = %d\n", a, b, c); // 16 10 6
	d = b++ + a;	//b + a 를 해서 d 를 26대입하고 b를 ++해서 11 

	printf("a = %d b =%d c = %d\n", a, b, d); // 16 11 26 
	printf("a/b = %d\n", a / b); //1
	printf("a%%b = %d\n", a % b); //5
	printf("a*=b = %d\n", a *= b); //176 //a = a * b;
	printf("%d\n", (c > d) ? 1 : 0);
	printf("%d\n", (c < d) ? 1 : 0);
}