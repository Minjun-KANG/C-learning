#include<stdio.h>
#include<time.h>

int sorting(int data[]);
int finddata(int number, int *data);
int main() {

	int number;
	int data[10] = {0}; 

	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++)
		data[i] = rand() % 99 + 1;

	sorting(data);

	for (int i = 0; i < 10; i++) {
		printf("%d\t", data[i]);
	}
	printf("\n");
	//while (1) {
	scanf("%d", &number);
		finddata(number, data);
	//}
}
sorting(int data[])
{
	int num;
	for (int j = 0; j < 10; j++) {

		for (int i = 0; i < 9-j; i++) {
			if (data[i] > data[i+1]) {
				num = data[i];
				data[i] = data[i+1];
				data[i+1] = num;
			}
		}
	}
}
finddata(int number, int *data) {
	int length = 10 / 2;

	printf("%d", length);
}

/*
#include<stdio.h>
#include<time.h>

int sorting(int *data);
int finddata(int number, int *data);
int main() {

int number;
int *data[10] = {0};

srand((unsigned int)time(NULL));
for (int i = 0; i < 10; i++)
*(data+i) = rand() % 99 + 1;

sorting(data);

for (int i = 0; i < 10; i++) {
printf("%d\t", *(data + i));
}
printf("\n");
//while (1) {
scanf("%d", &number);
finddata(number, data);
//}
}
sorting(int *data)
{
int num;
for (int j = 0; j < 10; j++) {

for (int i = 0; i < 9-j; i++) {
if (*(data+i) > *(data+i+1)) {
num = *(data+i);
*(data+i) = *(data+i + 1);
*(data+i + 1) = num;
}
}
}
}
finddata(int number, int *data) {
int length = 10 / 2;

printf("%d", length);
}*/