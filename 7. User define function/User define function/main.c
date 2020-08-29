#include<stdio.h>

char names(char a[]);		// 함수 선언(function declaration)
 
int main()
{
	 char name[10];			// 넘겨 줄 변수 name 선언
	 scanf("%[^\n]s", name);	//name에 값입력

	 names(name);			// 함수 사용(fuction call)

}
char names(char a[])		// 함수 정의(function define)
{
	printf("%s\n", a);		// names 라는 이름을 가진 함수가 하는 동작
}