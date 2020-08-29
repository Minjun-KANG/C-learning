#include<stdio.h>

void func(char *ptr, int n);
main()					//배열을 선언해서 그 배열주소값으로 출력
{

	char s[20];
	char *ptr = &s;
	int n;
	printf("%d\n", ptr);
	printf("%d\n", ptr+1);
	printf("Input String : ");
	scanf("%[^\n]s", s);

	printf("Input number : ");
	scanf("%d", &n);

	func(ptr, n);
	printf("%c", *(ptr));

}
void func(char *ptr, int n)
{
	printf("%c\n", *(ptr + (n - 1)));
}


/*void func(char *ptr, int n);		//포인터 변수에 문자열값 바로 입력
main()
{
	while (1) {
		char *ptr = "Kangminjun";
		int n;

		printf("Input number : ");
		scanf("%d", &n);
		func(ptr, n);
	}
}
void func(char *ptr, int n)
{
	printf("%c\n", *(ptr + (n-1)));
}*/