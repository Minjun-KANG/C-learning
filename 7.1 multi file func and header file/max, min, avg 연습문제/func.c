int max(int a[]) {
	int max = 0;
	for (int i = 0; i < 3; i++) {
		if (max < a[i])
			max = a[i];
	}
	printf("max  : %d\n", max);
}


int min(int a[]) {
	int min = a[0];

	for (int i = 0; i < 3; i++) {

		if (min > a[i])
			min = a[i];
	}

	printf("min  : %d\n", min);
}
int avg(int a[])
{
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		sum += a[i];
	}
	printf("ЦђБе : %0.2f\n", (float)sum / 3);
	
}
