#include<stdio.h>

void func(char *ptr, int n);
main()					//�迭�� �����ؼ� �� �迭�ּҰ����� ���
{

	char s[20];
	char *ptr = &s;
	int n;
	printf("%d\n", ptr);
	printf("%d\n", ptr+1);
	printf("Input String : ");
	scanf("%[^\n]s", s);

	printf("Input number : ");
	scanf("%d", &n);

	func(ptr, n);
	printf("%c", *(ptr));

}
void func(char *ptr, int n)
{
	printf("%c\n", *(ptr + (n - 1)));
}


/*void func(char *ptr, int n);		//������ ������ ���ڿ��� �ٷ� �Է�
main()
{
	while (1) {
		char *ptr = "Kangminjun";
		int n;

		printf("Input number : ");
		scanf("%d", &n);
		func(ptr, n);
	}
}
void func(char *ptr, int n)
{
	printf("%c\n", *(ptr + (n-1)));
}*/