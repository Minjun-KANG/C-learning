#include<stdio.h>
#include<string.h>



int main()
{
	char a[6] = "fzzzz";
	char b[5] = "zzzf";

	printf("%d\n", strcmp(a,b)); // 오른쪽이 더크면 -1, 왼쪽이 더크면 1, 같으면 0
}