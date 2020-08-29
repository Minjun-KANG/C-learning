#include<stdio.h>

void func(FILE *fp);

main()
{
	char ch[5][100];

	FILE *fp = fopen("text.txt", "w");

	for (int i = 0; i < 5; i++) {
		printf("Input %d sentence : ",i);
		fscanf(stdin, "%s", ch);		//fscanf(stdin < cmd창에서 )
		fprintf(fp, "%s\n", ch);		//fprintf(입력할위치, 입력할서식, 어딘가에 입력시켜줄 데이터를가지고있는 변수)
		
	}
	fclose(fp);
	fp = fopen("text.txt", "r");

	func(fp);
	//create file
	//write on afile
	//call you function
}
void func(FILE *fp)
{
	char ch[5][100] = {0};
	char c;
	int j = 0;

	for (int i = 0; i < 5; i++) {
		while ((c=fgetc(fp)) != EOF){
			ch[i][j] = c;
			j++;
		}
		printf("%s", ch[i]);
	}

	/*for (int i = 0; i < 5; i++)
	{
		fgets(ch[i], 10, fp);
		puts(ch[i]);
	}*/
	
	//using the loop and getc() copy the content of the file to ch
	//print the ch using loop
}
/*
	printf() - output |  writes on desplay
	scanf()	 - input  | reads from keyboard

	fprintf()	- writes on the file and display
	fscanf()	- reads from file and keyboard
*/