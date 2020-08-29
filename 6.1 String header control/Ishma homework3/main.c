#include<stdio.h>
#include "header.h"

main()
{
	
	char text[100], text2[5][10], word[10];

	printf("Input text to count number of letters in a given text for function1 : ");
	scanf("%s", text);

	for (int i = 0; i < 5; i++) {
	printf("Input %d words function2 : ",i);
	scanf("%s", text2[i]);
	}
	


	letter_count(text);
	word_sort(text2);

}
