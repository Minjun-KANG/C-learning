#include<stdio.h>


int main() {

	int x=10;
	int z=10l;
	int *y;
	int **y2;

	
	printf("%d\n",x);	//10						p - memory address			       �ּ� 
	printf("%u\n", x);	//10						*p - value at memory address       ��
	printf("%d\n", &x);	//address
	printf("%u\n\n", &x);	//address

	y = &x;				// y�� x �ּҰ� ����
	printf("%d\n", y);	// adress
	printf("%d\n\n", *y); // 10
	y2 = &y;

	printf("%d\n", &y2); // y2�� �ּҰ�
	printf("%d\n", y2); // y�� �ּҰ�
	printf("%d\n", *y2); // y �� �������ִ� x�� �ּҰ�
	printf("%d\n\n", **y2); // y�� �������ִ� �ּҾȿ� �ִ� ������ ������


	printf("%d\n", y);
	printf("%d\n\n", y - 3);

	z = &x;
	printf("%d\n", z);
	//printf("%d\n\n", *z);
	
}


