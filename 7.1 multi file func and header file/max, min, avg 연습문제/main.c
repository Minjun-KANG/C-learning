#include"userfunc.h"

int main()
{
	int num[3];

	for (int i = 0; i < 3; i++) {
		printf("%d��° ���� �Է��Ͻÿ� : ",i+1);
		scanf("%d", &num[i]);
	}
	
	max(num);
	min(num);
	avg(num);
	exit(0);
}
