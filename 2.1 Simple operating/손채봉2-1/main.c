#include<stdio.h>

main()
{
	float a, b, c, x, y, z;

	a = 9;
	b = 12;
	c = 3;
	
	x = a - b / 3 + c * 2 - 1;			// 3.0 으로 자동형변환 한다. 그리고 나눈다, 2.0 으로 자동형변환 하고 곱한다.
	y = a - b / (3 + c) * (2 - 1);
	z = a - (b / (3 + c) * 2) - 1;
	printf("x=%f\n", x);
	printf("y=%f\n", y);
	printf("z=%f\n", z);
}