#include<stdio.h>

main()
{
	FILE *fp = fopen("test.txt", "wt");
	if (fp == NULL) {
		puts("���Ͽ��� ����!");
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);
}