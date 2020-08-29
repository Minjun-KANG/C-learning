#include<stdio.h>

int main() {

	for (int i = 1; i <= 5; i++) {
		if (i == 1 || i == 5) {
			for (int j = 1; j <= 6; j++) {
				printf("*");
			}
		}
		else {
			for (int k = 1; k <= 4; k++) {
				printf(" ");
				if (k == 4) {
					printf("*");
				}
			}
		}
		printf("\n");
	}
}
		
			
			