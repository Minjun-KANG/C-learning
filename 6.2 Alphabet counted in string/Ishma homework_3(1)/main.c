#include<stdio.h>
#include<string.h>

void func(char *p[], char n);

main(int argc, char *argv[]) {

	char *p[3];   //배열을 찍을 포인터
	p[0] = argv[1];
	char name[3][100];
	int i;

	char n; // 알파벳
	printf("Please enter the alphabet to compare : ");
	scanf("%c", &n);

	//printf("Please enter a sentence : ");
	for (i = 0; i < 3; i++) {

		p[i] = argv[i + 1];

	}
	func(p, n);


}
void func(char *p[], char n) {

	char c[3][100];
	int count = 0;
	int i;
	int j;


	for (i = 0; i<3; i++) {
		strcpy(c[i], *(p + i));
	}
	for (i = 0; i< 3; i++) {
		for (j = 0; j < strlen(c[i]); j++) {
			if (c[i][j] == n) {
				count++;
			}
			else if (c[i][j] != n) {
				continue;
			}
		}

		printf("This alphabet is %c, sentence-%s have %d\n", n, c[i], count);
		count = 0;

	}

}