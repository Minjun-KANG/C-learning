#include<stdio.h>

int main()
{
	int a[5] = { 0 };
	int big, small, sp3=0;

	for (int i = 0; i <= 4; i++) {
		printf("Input %d number : ", i);
		scanf("%d", &a[i]);
		if (sp3 == 0) {
			small = a[sp3];
			big = a[sp3];
			sp3++;
		}
		if (big < a[i]) {
			big = a[i];
		}if (small > a[i]) {
			small = a[i];
		}
	}
	printf("Big : %d\nSmall : %d\n", big, small);
}