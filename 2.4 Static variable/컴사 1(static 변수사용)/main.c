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
	extern int h;					//�޾ƿ͹�����~
	printf("h=%d\n", h);
	
}
void stat(void)
{
	static int x = 0; //x�� ���Ӱ� ���� �� 1���� �����ϴ� �����̶� for���� ������� �ʴ´�.
	//int x = 0; ���� 1,1,1 ���´� �ֳĸ� stat���� x�� ����ϰ� for������ ���ư��� x�� ���󰡱� ���� 
	x = x + 1;
	printf("x = %d\n", x);
}