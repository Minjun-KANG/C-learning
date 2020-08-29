#include<stdio.h>

main()
{
	FILE *fp = fopen("test.txt", "wt");
	if (fp == NULL) {
		puts("파일오픈 실패!");
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);
}