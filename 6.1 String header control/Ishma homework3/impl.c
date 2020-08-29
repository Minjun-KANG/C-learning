#include<stdio.h>
#include<string.h>
#include<ctype.h>

void  letter_count(char text[])
{
	int cct = 1;
	int count[32] = { 0 };
	char change;
	
	for (int i = 0; i < strlen(text); i++) {	// 대문자입력은 그대로 냅두고, 소문자입력 대문자로 바꾸기 ex)AbcD --> ABCD
		if (text[i] > 96) {
			text[i] = text[i] - 32;
		}
	}

	for(int i = 0; i< strlen(text); i++){		//알파벳순서대로 소트정렬하기 ex) afdbceg -> abcdefg
		for (int j = 0; j < strlen(text)-1; j++) {
			if (text[j] > text[j + 1]) {
				change = text[j];
				text[j] = text[j + 1];
				text[j + 1] = change;
			}
		}
	}
	
	for(int i = 0; i<strlen(text); i++)		// 각 알파벳 개수 구하기 a-?? b-?? c-??
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
		for (int i = 0; i < strlen(text2[j]); i++) {	// 대문자입력은 그대로 냅두고, 소문자입력 대문자로 바꾸기 ex)AbcD --> ABCD
			if (text2[j][i] < 97) {
				text2[j][i] = text2[j][i] + 32;
			}
		}
	}

	for (int j = 0; j < 5; j++) {			// 문자열 소트정렬
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

