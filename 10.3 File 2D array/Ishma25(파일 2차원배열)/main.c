#include<stdio.h>

void func(FILE *fp);

main()
{
	char ch[5][100];

	FILE *fp = fopen("text.txt", "w");
	//scanf(stdin)
	fprintf(fp, "HELLO \nkang\nmin\njun\nthanks\n");
	fclose(fp);
	fp = fopen("text.txt", "r");
	
	for (int i = 0; i < 5; i++)
	{
		fgets(ch[i], sizeof(ch[i]), fp);
		printf("%s", ch[i]);
	}
	fclose(fp);
	

	//func(fp);
}

/*
printf() - output |  writes on desplay
scanf()	 - input  | reads from keyboard

fprintf()	- writes on the file and display
fscanf()	- reads from file and keyboard
*/