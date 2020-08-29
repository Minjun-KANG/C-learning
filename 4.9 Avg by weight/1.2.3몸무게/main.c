#include<stdio.h>

int main() {

	int a[3];
	float sum=0;
	for (int i = 0; i < 3; i++)
	{
		printf("%d¹øÂ° ¸ö¹«°Ô´Â ? : ",i);
		scanf("%d", &a[i]);
		sum = sum + a[i];
	}

	printf("¸ö¹«°Ô Æò±Õ°ª : %f", sum/3);
}