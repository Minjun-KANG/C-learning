#include<stdio.h>

struct personal
{
	char name[20];
	int day;
	char month[10];
	int year;
	float salary;
};

main()
{
	struct personal person;
	printf("Inpur Values\n");
	scanf("%s %d %s %d %f", person.name, &person.day, person.month, &person.year, &person.salary);
	printf("%s %d %s %d %0.2f", person.name ,person.day ,person.month ,person.year ,person.salary);
	//%s 는 배열에 주소를 가져와서 주소안에 내용물을 찍는다.
	//scanf는 여려개의 값을 바로 받을 수 없으니깐 변수에 주소값을 보내는거다
}