#include <stdio.h>
#include <stdlib.h>
void address(int *ptr, int i);
int main()
{
	int i;
	int j;
	printf("size : ");
	scanf("%d", &i);
	int *ptr = (int*)malloc(sizeof(int)*i);

	for (int j = 0; j < i; j++)
	{
		printf("%d input number : ", j + 1);
		scanf("%d", ptr + j);
	}

	int result = 0;
	for (j = 0; j < i; j++) {
		result = result + *(ptr + j);

		//int형 포인터와 float형 포인터를 설정
		int * sum;
		float * avg;
		sum = &result;

		printf("sum : %d\nm ", *sum);
		(float)result = (float)result / (float)i;
		avg = &result;
		printf("avg  : %f\n", *avg);

		address(ptr, j);
		
		free(ptr);
	}
}
//주소값 출력 함수
void address(int *ptr1, int i)
{
	int j;
	for (j = 0; j < i; j++)
		printf("%dadress is %x\n", j + 1, (ptr1 + j));
}