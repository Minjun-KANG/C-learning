#include<stdio.h>

int main() {
	int a[10] = { 0 };
	

	for (int i = 0; i <= 9; i++) {
		printf("INPUT Number : ");
		scanf("%d", &a[i]);
	}
	for (int i = 0; i <= 9; i+=2) {
		
		if (a[i]) {
			printf("%d\n", a[i]);
		}
		else {
			continue;
		}
	}
}