#include<stdio.h>
#include<stdlib.h>


void main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	if (argc < 2) {
		printf("input error\n");
		exit(1);
	}
	for (i = 1; i < argc; i++)
		sum += atoi(*(argv + i));

	printf("%.3f\n", (float)sum / --argc);
}