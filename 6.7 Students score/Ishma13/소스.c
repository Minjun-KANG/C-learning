#include<stdio.h>

int main()
{
	int a[4][5] = { 0 };
	float sum = 0;
	
	for (int i = 0; i <= 3; i++) {
		printf("%d Student\n" , i);
		for (int j = 0; j <= 4; j++) {
			printf("subject %d : ", j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("	  suject0  | subject1 | subject2 | subject3 | subject4 |\n");
	for (int i = 0; i <= 3; i++) {
		printf("student%d  ",i);
		for (int j = 0; j <= 4; j++) {
			printf("%-7d  | ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");

	for (int i = 0; i <= 3; i++) {
		for (int j = 0; j <= 4; j++) {
			sum = sum + a[i][j];
		}
		printf("Average score of student%d : %0.2f\n", i, sum/5);
		sum = 0;
	}
	printf("\n\n");

	for (int i = 0; i <= 4; i++) {

		for (int j = 0; j <= 3; j++) {
			sum = sum + a[j][i];
		}
		printf("Average score of students in subject%d : %0.2f\n", i, sum / 4);
		sum = 0;
	}
}