#include<stdio.h>
void main(void)
{
	char *c[3] = { "pascal","basic","fortran" };
	char **p;
	p = c;
	printf("%c\n", *p + 4);
}
