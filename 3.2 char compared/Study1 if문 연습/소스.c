#include<stdio.h>

int main()
{
	int a, c;
//	scanf("%[^\n]c %[^\n]c", &a, &c);
	scanf("%c",&a);
	c = 0;
	scanf("%c", &c);

	if (a>c) {
		printf("%c가 %c보다 큽니다.\n", a, c);
	}
	else if (a<c) {
		printf("%b가 %a보다 큽니다.\n", a, c);
	}
	else {
		printf("두 문자는 같습니다.");
	}
}