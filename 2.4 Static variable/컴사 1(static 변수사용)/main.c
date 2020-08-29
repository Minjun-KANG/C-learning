#include<stdio.h>

void stat(void);
int z;
main()
{
	int i;
	for (i = 1; i <= 3; i++) {
		stat();
	}
	z = 20;
	sub();
	printf("z=%d\n", z);
	extern int h;					//받아와버리기~
	printf("h=%d\n", h);
	
}
void stat(void)
{
	static int x = 0; //x를 새롭게 만들 때 1번만 동작하는 선언문이라 for문에 영향받지 않는다.
	//int x = 0; 값이 1,1,1 나온다 왜냐면 stat에서 x를 출력하고 for문으로 돌아갈때 x가 날라가기 때문 
	x = x + 1;
	printf("x = %d\n", x);
}