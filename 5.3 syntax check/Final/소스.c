#include "userheader.h" //유저가 만든 헤더파일을 참조

int ffff;// 전역변수 모든함수에 엑세스 가능 거의사용안함

//int sum(int a, int b); //userheader.h에 선언을 미리 해놈
/*
struct student
{
	int a;
	float b;
}sona;
*/

int main() //기본 타입 int main(void) 아무렇게 써도 상관없다.
{
	int a; //변수선언문 int-4B, char-1B, float-4B, double-4B unsigned int(부호없는 정수 등)
	float f = 10.2; //변수 초기화방법
	char c = 'C'; //변수 초기화방법
	int array[5] = { 10,20,30.40,50 }; //4byte 변수 5개 생성 // 배열의 이름은 그 배열에 첫번째 주소를 가르킨다
	char array2[6] = "APPLE"; //char형 배열은 널문자고려
	int *ptr;  //포인터변수 주소값을 저장한다. 앞 자료형은 어떤종류에 자료형의 주소를 넣을지 지정
	int pointer = 10;
	ptr = &pointer; // 포인터 pointer변수의 주소값을 ptr에 저장한다 //pointer 과 *ptr의 값은 같다.
	/*
	printf("%f\n", f); //%d, %c, %s, %o, %x, %X, %i // 서식문자열

	scanf("%d", &a); // 래퍼런스,  scanf함수가 주소를 넘겨받게끔 코딩
	*/

	/*if (pointer > a) {		 //조건이 맞을때는 참(1), 거짓(0)반환
		printf("%d\n", a);
	}
	else if (a < pointer) {
		printf("%d\n", pointer);
	}
	else
	{
		printf("거짓\n");
	}*/
	/*switch (c)	//입력받은 변수로 출력을 결정한다.
	{
	case 'C':
		printf("Wear thick clothes because of the cold weather.\n");
		break; // 코드의 흐름을 다룸, 반복문  탈출
	case 'H':
		printf("You drink more water because of the hot weather.\n");
		break;
	case 'R':
		printf("Take your umbrella.\n");
		break;
	default:
		printf("ERROR\n");
		break;
	}*/
	/*
	int k = 0;
	for (int i = 0; i < 10; i++)	//반복문. 초기값, 조건값, 증감값.
	{
		if(i == 5)
			continue; // 조건에 맞는 단계만 스킵하고 다음 반복문으로 넘어간다.
		printf("%d\n",k);
		k++;

	}
	*/
	/*for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 5-j; i++)	//중첩 for문.
		{
			printf("*");
		}
		printf("\n");
	}*/
	/*while (1)// 조건
	{
		//작업내용
	}*/
	/*do
	{
		// 무조건 한번 실행하고 조건을 비교하는 do-while문
	} while (true);*/		//조건

	/*	int L = 0;
		for (int i = 0; i < 5; i++) {
			array[i] = L;		// array[0],1,2,3,4
			L++;
		}*/
		/*L = 0;
		int cd[3][3];
		for (int i = 0; i < 3; i++)		// 2차원배열. 0,0 부터 2,2까지 사용가능한 배열
		{
			for (int j = 0; j < 3; j++) {
				cd[i][j] = L++; // 0.0 0.1 0.2 1.0 1.1 ---- 순차적으로 대입
			}
		}*/

		//함수는 선언,정의, 콜 순으로 사용된다.
	/*	sum(10, 20);		// 함수 콜부분
		int op;
		op = sum(20, 30);
		printf("%d\n", op); // 50출력*/

		/*	int *p;
			int abc = 10;
			p = &abc;		// p 포인터변수 안에는, abc변수의 주소가 들어간다.
			printf("%d", abc); //10출력
			sum2(p);
			printf("%d", abc); //20출력
		}*/
		/*int array3[5] = { 10,20,30,40,50 };
		sum3(array3);*/
	/*
	char *month[12] =
	{ "JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC" };

	char **p;
	p = month;
	printf("%c\n", **p);			//J
	printf("%c\n", *(*(++p)));		//F
	printf("%c\n", *(*(++p) + 1));	//MAR 의 A
	printf("%c\n", *(*(p + 3) + 2)); //JUN 의 N

	*/
	/*struct student risin;		//구조체 데이터를 효율적으로 관리
	risin.a = 10;
	risin.b = 10.2;
	sona.a=20;
	sona.b = 20.2;
	*/
}
/*int sum(int a, int b) // 함수 정의 부분.
{
	int c; 
	c = a + b;
	return c; // 함수의 리턴개념 sum함수에 있는 변수c를 return한다. 어디로?-> main함수 op변수로.
	//call by value.
}*/
/*int sum2(int *a)
{
	*a = 20;
} //call by reference
*/
/*
int sum3(int *a) // array3[];
{
	*(a + 1) = 10;  //array3[1] = 10; 과 같다.
} //call by reference
*/





