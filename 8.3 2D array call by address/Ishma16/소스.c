#include<stdio.h>
#include<string.h>

void counter(char name[][10], char d);

int main()
{
	int i;
	char name[3][10] = {0};
	char d;

	printf("Please Input an alphabet for searching : ");  // 무슨일인지는 모르겠지만 이게 문자열을 입력한 후에 
	scanf("%c", &d);									// 들어가면알파벳값을 입력받지않음.

	printf("Please Input your name : "); // 이렇게 하면 타이핑하는 횟수는 1번인데 배열은 나눠서 들어감
	for (i = 0; i < 3; i++) {            // = {"Kang","Min","Jun"} 과 같게 들어감
		scanf("%s", name[i]);
	}
	counter(name,d);
}

void counter(char name[][10], char d)
{
	int sum=0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < strlen(name[i]); j++) {
			if (name[i][j] == d) {
				sum = sum + 1;
			}
		}
	}
	printf("%c : %d\n", d, sum);

	for (int i = 0; i < 3; i++) {
		int j = strlen(name[i]);
		printf("row%d - %d\n", i, j);
	}

}