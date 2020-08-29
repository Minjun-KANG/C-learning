#include<stdio.h>
#include"user.h"

main()
{
	//int maxage, maxmom, maxhei;
	int maxi;
	int a[3];
	struct user student[3];

	for(int i=0; i<=2; i++)
	{
		printf("What is student%d age, weight, height? : ",i);
		scanf("%d %d %d",&student[i].age ,&student[i].weight ,&student[i].height);
	}

	/*for (int i = 0; i <= 2; i++) {
		a[i] = student[i].age;
		printf("%d",max)
	}*/

	maxi = compare(student[0].age, student[1].age, student[2].age);
	printf("olddest : %d\n", maxi);

	maxi = compare(student[0].weight, student[1].weight, student[2].weight);
	printf("heaviest : %d\n", maxi);

	maxi = compare(student[0].height, student[1].height, student[2].height);
	printf("tallest : %d\n", maxi);

}