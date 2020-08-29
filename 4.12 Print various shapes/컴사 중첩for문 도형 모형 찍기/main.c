#include<stdio.h>
#include"define.h"

int main()
{
	int mode ,length;
	printf("-중첩 for문 도형 찍기-\n");
	printf("1. ☆\n");
	printf("2. ★\n");
	printf("3. #\n");
	printf("4. ◇\n");
	printf("5. ◆\n");
	printf("6. □\n");
	printf("7. ♠\n");
	printf("8. ♥\n");
	printf("모드를 선택하시오 : ");
	scanf("%d", &mode);
	printf("길이를 입력하시오 : ");
	scanf("%d", &length);

	switch (mode)
	{
	case 1:
		Star(length);
		break;
	case 2:
		Star(length);
		break;
	case 3:
		printf("존재하지 않는 모드입니다.\n");
		break;
	case 4:
		Rhombus(length);
		break;
	case 5:
		Rhombus(length);
		break;
	case 6:
		Square(length);
	case 7:
		Clover(length);
	case 8:
		Hart(length);
		break;
	default:
		printf("존재하지 않는 모드입니다.\n");
		break;
	}
}