#include<stdio.h>


int main() {

	int x=10;
	int z=10l;
	int *y;
	int **y2;

	
	printf("%d\n",x);	//10						p - memory address			       주소 
	printf("%u\n", x);	//10						*p - value at memory address       값
	printf("%d\n", &x);	//address
	printf("%u\n\n", &x);	//address

	y = &x;				// y에 x 주소값 넣음
	printf("%d\n", y);	// adress
	printf("%d\n\n", *y); // 10
	y2 = &y;

	printf("%d\n", &y2); // y2의 주소값
	printf("%d\n", y2); // y의 주소값
	printf("%d\n", *y2); // y 가 가지고있는 x의 주소값
	printf("%d\n\n", **y2); // y가 가지고있는 주소안에 있는 변수의 데이터


	printf("%d\n", y);
	printf("%d\n\n", y - 3);

	z = &x;
	printf("%d\n", z);
	//printf("%d\n\n", *z);
	
}


