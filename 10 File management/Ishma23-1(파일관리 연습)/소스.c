#include<stdio.h>

void func(FILE * fp);

main()
{
	FILE *fp = fopen("text.txt", "w");					//fp에 주소를넣고 장난치는거같음 아마
	char data[100];

	char c;

	// 포인터를 반환하기 때문에 실패시 NULL를 반환합니다.
	if (fp == NULL)
	{
		printf("faild \n");
	}
	
	/*printf("Input data : ");
	fscanf(stdin, "[^\n]%s", data);
	fprintf(fp, "%s" , data);  // 외부 파일에 데이터를 쓸 수 있음*/

	while ((c = getchar()) != EOF) {
		putc(c, fp);
	}
	fclose(fp);
	fp = fopen("text.txt","r");
	func(fp);
}

void func(FILE *fp)
{
	char c[100];
	int i = 0;
	int space = 1;
	int ch = 0;

	// 한글자씩 읽어서 화면으로 출력
	while ((c[i] = getc(fp)) != EOF)
	{
		printf("%c", c[i]);
		if (c[i] != ' ') {
			ch++;
		}
		else if (c[i] == ' ') {
			space++;
		}
		i++;
	}
	printf("\n");
	printf("char : %d\n", ch-1);
	printf("word : %d\n", space);


	fclose(fp);
}