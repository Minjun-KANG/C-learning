#include<stdio.h>
#include<string.h>

void sort(student);
struct cham
{
	char no[11]; 
	char name[20];
};
typedef struct cham Info;
int main()
{
	Info student[5]; // Struct cham student[5];

	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 학생 학번, 이름을 입력하시오 : ", i + 1);
		scanf("%s %[^\n]s", student[i].no, student[i].name);
	}
	char a[11];
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 4-j; i++)
		{
			
			//strcpy(a, student[0].no);
			
			if (strcmp(student[i].no, student[i+1].no)); // 앞에놈이 더 크면 1
			{
				
				strcpy(a, student[i].no);
				strcpy(student[i].no, student[i+1].no);
				strcpy(student[i+1].no, a);
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%s,\t %s\n", student[i].no, student[i].name);

	}
}
