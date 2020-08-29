#include<stdio.h>
#include<ctype.h>

int main()
{
	char a;
	char ch = 0;
	char name[1000];
	int i, j = 0, sp1 = 0, sp2 = 0,n ;
	printf("Korean name?\n");

	while (ch != '\n')
	{
		ch = getchar();
		name[j] = ch;
		j++;
		n = j;
	}
	a = name[0];
	printf("%c", a - 32);
	
	for (int z = 0; z <= n; z++) {

		if (name[z] == ' ') {
			printf("%c", name[z + 2]-32);
		}
	}
	putchar('\n');
	
}

	/*	if (ch == ' '&&sp1==0) {
			sp1 = j;
			sp2++;
		}else if(ch==' '&&sp2==1)
	}
	
	
}*/