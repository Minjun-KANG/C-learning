#include<stdio.h>
#include<string.h>
#include<ctype.h>

void  letter_count(char text[])
{
	int cct = 1;
	int count[32] = { 0 };
	char change;
	
	for (int i = 0; i < strlen(text); i++) {	// �빮���Է��� �״�� ���ΰ�, �ҹ����Է� �빮�ڷ� �ٲٱ� ex)AbcD --> ABCD
		if (text[i] > 96) {
			text[i] = text[i] - 32;
		}
	}

	for(int i = 0; i< strlen(text); i++){		//���ĺ�������� ��Ʈ�����ϱ� ex) afdbceg -> abcdefg
		for (int j = 0; j < strlen(text)-1; j++) {
			if (text[j] > text[j + 1]) {
				change = text[j];
				text[j] = text[j + 1];
				text[j + 1] = change;
			}
		}
	}
	
	for(int i = 0; i<strlen(text); i++)		// �� ���ĺ� ���� ���ϱ� a-?? b-?? c-??
	{
		if (text[i] == text[i + 1]) {
			cct++;
		}
		else if (text[i] != text[i + 1]) {
			printf("%c - %d\n", text[i],cct);
			cct = 1;
		}
	}
}



void word_sort(char text2[][10])
{
	char change[10];

	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < strlen(text2[j]); i++) {	// �빮���Է��� �״�� ���ΰ�, �ҹ����Է� �빮�ڷ� �ٲٱ� ex)AbcD --> ABCD
			if (text2[j][i] < 97) {
				text2[j][i] = text2[j][i] + 32;
			}
		}
	}

	for (int j = 0; j < 5; j++) {			// ���ڿ� ��Ʈ����
		for (int i = 0; i < 4; i++)
		{
			if (strcmp(text2[i], text2[i + 1]) == 1) {
				strcpy(change, text2[i]);
				strcpy(text2[i], text2[i + 1]);
				strcpy(text2[i + 1], change);
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", text2[i]);
	}
}

