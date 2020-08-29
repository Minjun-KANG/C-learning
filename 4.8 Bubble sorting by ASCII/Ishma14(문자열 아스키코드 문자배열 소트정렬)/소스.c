#include<stdio.h>
#include<string.h>

int main()
{
	char a;
	char name[20] = { 0 };
	int j = 0;
	int b = 0;
	printf("Please type your name : \n");

	gets(name);
	//scanf("%[^\n]s", name);

	printf("What are u looking for : ");
	scanf("%c", &a);

	for (b = 0; b<sizeof(name); b++)
	{
		if (a == name[b])

			printf("%d ", b);
	}

	printf("\n\n");

	printf("Input String length : %d",strlen(name));

	printf("\n\n");

	printf("before : %s\n", name);

	int len = strlen(name);
	b = 0;
	for (j = 0; j < len - 1; j++) {
		for (int i = 0; i < len - 1; i++) {
			if (name[i] > name[i + 1]) {
				b = name[i];
				name[i] = name[i + 1];
				name[i + 1] = b;
			}
		}
	}
	printf("after : %s\n", name);
}
