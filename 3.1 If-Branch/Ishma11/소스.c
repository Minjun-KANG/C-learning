#include<stdio.h>

int main(void)
{
	int b, c;

	for (b = 1; b <= 5; b++) {
		printf("*");
			for (c = 1; c <= 4; c++) {
				if (b == 2 || b == 3 || b == 4) {
					break;
					//continue; ��Ƽ������ �׳� �ڱ�ܰ踸 �����ϴ� �����̶�� break�� �ڽ��� ���� �ݺ����� Ż���ϴ´���
				}
				printf("*");
			}
			printf("\n");
		}
}