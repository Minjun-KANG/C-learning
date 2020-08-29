#include<stdio.h>

void mathoperation(int x, int y, int *s, int *d);
main()
{
	int x = 20, y = 10, s, d;
	mathoperation(x, y, &s, &d);	// mathoperation 으로 x ,y넘긴다. 그리고 s변수와 d변수의 주솟값 넘긴다
									//& 주소 뽑아내기
	printf(" s=%d\n d=%d\n", s, d);
}
void mathoperation(int a, int b, int *sum, int *diff)
{
	*sum = a + b;
	*diff = a - b; //연산자 3개 * 내용물뽑아내기
}// &s 인 &s의 주소를 sum 으로 넘겨주고 sum은 자신의 데이터에 들어있는 &s의 주소를 *로 참조해서 내용물을 사용한다
// 그니깐 실제로 print sum 하면 s의 주솟값나오고 print s하면 정수형 데이터 나오는거임.
// * , ! < 단항연산자 < 괄호다음 연산자 우선순위로 매우 높은 우선순위를 가진다.