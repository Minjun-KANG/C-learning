#include <stdio.h>

main()
{
	float x, y, z;
	float *px, *py, *pz;

	printf("input number : ");
	scanf("%f %f %f", &x, &y, &z);

	px = &x;
	py = &y;
	pz = &z;
	
	if (*px > *py && *px > *py)
	{
		printf("%0.33f\n", *px);
	}else if (*py > *px && *py > *pz)
	{
		printf("%0.3f\n", *py);
	}else if (*pz > *px && *pz > *py)
	{
		printf("%0.3f\n", *pz);
	}
	
	printf("sum : %0.3f\navg : %0.3f\n", *px + *py + *pz, (*px + *py + *pz)/3);

}