#include<stdio.h>

void func(char * ptr, int n);

main()
{
	
	char *ptr = "Kangminjun";

	func(ptr, 4);

}
void func(char *ptr, int n)
{
	printf("%c\n", *(ptr + n));
}
