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
	//%s �� �迭�� �ּҸ� �����ͼ� �ּҾȿ� ���빰�� ��´�.
	//scanf�� �������� ���� �ٷ� ���� �� �����ϱ� ������ �ּҰ��� �����°Ŵ�
}