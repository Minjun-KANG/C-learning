#include<stdio.h>

struct user
{
	int age;
	int weight;
	int height;
};

struct user dop(struct user student1, struct user student2, struct user student3);

main()
{
	struct user student1, student2, student3, max;

		printf("your information , age weight height");
		scanf("%d %d %d", &student1.age, &student1.weight, &student1.height);
		printf("your information , age weight height");
		scanf("%d %d %d", &student2.age, &student2.weight, &student2.height);
		printf("your information , age weight height");
		scanf("%d %d %d", &student3.age, &student3.weight, &student3.height);

		max = dop(student1, student2, student3);
		printf("olddest : %d\n", max.age);
		printf("heaviest : %d\n",max.weight);
		printf("tallest : %d\n", max.height);
}

struct user dop(struct user student1, struct user student2, struct user student3) {
	
	struct user max;

	if(student1.age > student2.age && student1.age > student3.age){
		max.age = student1.age;
	}else if (student2.age > student1.age && student2.age > student3.age){
		max.age = student2.age;
	}else{
		max.age = student3.age;
	}
	if (student1.weight > student2.weight && student1.weight > student3.weight) {
		max.weight = student1.weight;
	}
	else if (student2.weight > student1.weight && student2.weight > student3.weight) {
		max.weight = student2.weight;
	}
	else {
		max.weight = student3.weight;
	}
	if (student1.height > student2.height && student1.height > student3.height) {
		max.height = student1.height;
	}
	else if (student2.height > student1.height && student2.height > student3.height) {
		max.height = student2.height;
	}
	else {
		max.height = student3.height;
	}
	return max;
}
