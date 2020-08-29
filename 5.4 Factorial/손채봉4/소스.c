#include<stdio.h>
factorial(int n);

main(void)
{
	int f;
	f = factorial(5);
	printf("%f", f);
}

factorial(int n) {
	int fack;
	if (n == 1) {
		return(1);
	}
	else {
		fack = n*factorial(n - 1);
		return 0;
	}
}

/*{
	
	printf("This is an example of recursion\n");
	main();
}*/
