#include<stdio.h>
#include<ctype.h>

int main()
{
	char ch=0;
	char name[20];
	int i=0, j=0, k = 0, x=0, z=0;
	printf("Korean name?\n");

	scanf("%[^\n]s", name);
	/*while (ch != '\n')
	{
		scanf("%c", &ch);
		name[j] = ch;
		j++;
	}*/

	printf("�� �� ���ڴ�? : " );
	scanf("%c", &ch);

		for (k = 0; k <= j; k++) {
			if (name[k] == ch)
				i++;
			if (isupper(name[k])) {
				x++;
			}
			else if(islower(name[k])){ z++; }
		}
		
		printf("%c ���ڴ� %d�� �Դϴ�.\n",ch , i);
		printf("BIG : %d\n" ,x);
		printf("Small : %d\n", z);

}