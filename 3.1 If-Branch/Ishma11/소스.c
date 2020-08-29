#include<stdio.h>

int main(void)
{
	int b, c;

	for (b = 1; b <= 5; b++) {
		printf("*");
			for (c = 1; c <= 4; c++) {
				if (b == 2 || b == 3 || b == 4) {
					break;
					//continue; 컨티뉴문은 그냥 자기단계만 무시하는 느낌이라면 break는 자신이 속한 반복문을 탈출하는느낌
				}
				printf("*");
			}
			printf("\n");
		}
}