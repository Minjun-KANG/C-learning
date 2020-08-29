#include<stdio.h>
#include<string.h>

struct str func(struct str *p);

struct str
{
	char *name;
	int n_of_char;
};

main() {
	char s[5][100];

	struct str arr[5];
	struct str *strp;
	strp = &arr;

	printf("input a sentence : ");
	for (int i = 0; i < 5; i++) {
		scanf("%s", s[i]);
		(strp + i)->name = s[i];
		(strp + i)->n_of_char = 0;
	}
	func(strp);

	printf("\n");
	for (int i = 0; i < 5; i++) {
		printf("%s\n", (strp + i)->name);
	}


}

struct str func(struct str *strp)
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < strlen((strp + i)->name); j++) {
			(strp + i)->n_of_char++;
		}
		printf("%s - has %d letters\n", (strp + i)->name, (strp + i)->n_of_char);
	}
}