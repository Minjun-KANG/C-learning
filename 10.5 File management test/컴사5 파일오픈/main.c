#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	FILE *fp;
	char str[256]="Hi!";
	fp = fopen("myfile.txt", "w"); // r 읽기, w 쓰기

	/*if(!fp){ // !fp < 아주 유식한 논리연산자 사용법
		printf("FILE open Error");
		exit 0; //stdlib.h 파일에 있음
	}*/

	fscanf(fp, "%s", str);		//fp 를 읽어서 str에 내용저장
	printf("%s\n", str);
	//fprintf(fp "%s", str);  이러면 파일에 입력됨 
	fclose(fp);
}
//파일이 없으면 어쩌냐? fp = NULL 이 리턴 그래서 fscanf에서 에러남
// 그럼 myfile.txt 는 어딨냐? 라고 말함. 커런트 디렉터리라고함 main.c 가 있는 폴더
//12.5 12.6 인가 설명안한거같음
// 12.7