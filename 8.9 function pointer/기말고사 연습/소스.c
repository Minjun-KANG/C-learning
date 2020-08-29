	// 포인터 함수
	#include<stdio.h>

	void sayhello();// 함수를 포인터로 호출하는 예제
	void funcdemo();

	main()
	{
		void(*ptrfunc)();// 첫번째 괄호()함수이름? 함수포인터?두번째괄호()그함수에 인수?
		ptrfunc = funcdemo;// void (*funcdeom)(int, int); 이런식으로 사용하는듯
		void(*sayhelloptr)() = sayhello;

		(*sayhelloptr)();
		ptrfunc();
	}

	void sayhello()
	{
		printf("HEllo \n\n");
	}
	void funcdemo()
	{
		printf("pointer to function\n\n");
	}