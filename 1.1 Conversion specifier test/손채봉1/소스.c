#include<stdio.h>

main()
{
	
	printf("Hello world! \n");

	printf("%d %d %d\n", 32767, 32767 + 1, 32767 + 10);
	printf("\n");
	printf("%ld %ld %ld\n", 32767L, 32767L + 1L, 32767L + 10L);

	/*
	# 은 무엇일까? free processer 라고 한다. #
	include<header> 같은경우엔 컴파일하기전에 헤더파일을 처리하고 와라 라는 뜻이다.
	#define pi 3.142 이제부터 pi라고 코드에 나오는 거는 3.142로 바꾸고 컴파일 하겠다.

	컴퓨터언어에선 16 bit 중에 맨 앞 한자리 1bit는 부호비트이다. - 인지 +인지
	그래서 -32,768 ~ 32,767 인데 왜 768이냐 ? 767이 아니라? 보수로 계산했을 때 -0은 없기 때문이다.

	64bit 운영체제 에서는 자동으로 long int로 선언된다.



	
	*/

	int a=10;
	a *= 2 + 1; // 이건 30이다 왜냐면 대입연산자보다 산술연산자가 우선순위가 높기 때문에 a = a* 3
}