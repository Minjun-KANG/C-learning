#include<stdio.h>

int main()
{
	char a[10] = { '0','1','2','3','4','5','6','7','8','9' };
	char b[10] = { 'A','B','C','D','E','F','G','H','I','J' };
	char c[20] = {0};
	//int addit = 0, addit2 = 0, incre ,ho;
	int sunsa = 0; int gatsu = 1; int asun = 0; int bsun = 0, ho = sunsa + gatsu;
	
	while (sunsa<20)
	{
		
		for (gatsu; gatsu < 5; gatsu++) {
			ho = sunsa;
			for (asun; asun < ho; asun++) {
				c[sunsa] = a[asun];
				sunsa++;
			}
			
			for (bsun; bsun < ho; bsun++) {
				c[sunsa] = b[bsun];
				sunsa++;
			}
		}
	}
	for (int i = 0; i < 20; i++)
		printf("%c", c[i]);
	printf("\n");
}

/*for (incre=0; incre < 20; incre++) {
for (addit; addit <= incre; addit++) {
c[addit] = a[incre];
}
addit2 = addit + 1;
for (addit2; addit2 <= incre; addit2++) {
c[addit2] = b[incre];
}
}*/