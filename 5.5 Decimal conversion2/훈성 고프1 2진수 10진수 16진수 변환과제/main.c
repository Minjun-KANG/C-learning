#include<stdio.h>


void binto(int *ptr);
void hexto(int number);
void decto(int number);

void main()
{
	int menu;
	int number;
	char bin[6];
	int binary[5];

	printf("B -> Hex, Dec 1\n");
	printf("H -> Bin, Dec 2\n");
	printf("D -> Hex, Bin 3\n");
	printf("input menu : ");
	scanf("%d", &menu);
	
	if (menu == 1) {
		printf("input bin number : ");
		scanf("%s", bin);

		for (int i = 0; i < 5; i++) {
			if (bin[i] == '1') {
				binary[i] = 1;
			}
			else if (bin[i] == '0')
			{
				binary[i] = 0;
			}
			if (binary[4 - i] > 1 || bin[4 - i] < 0) {
				printf("You sholud type one or zero\nERROR!\n"); // 0�� 1�̾ƴ� �ڿ����� ���� �� ���α׷�����
				return 0;
			}
		}
		char bin[5] = { 0 };
		binto(binary);
	}
	else if (menu == 2) {
		printf("input hex number : ");
		scanf("%x",&number);
		hexto(number);
	}
	else if (menu == 3) {
		printf("input dec number : ");
		scanf("%d",&number);
		decto(number);
	}
	else {
		printf("You should input 1~3\nERROR!\n"); //�޴��� ���� ���⸦ �������� ��
		return 0;
	}
}

void binto(int *ptr)
{
	int sum = 0;
	int a=0;

	for (int i = 0; i < 5; i++) {
		if (ptr[i] == 1) {
			a = 1;
			for (int j = 0; j < i; j++) {
				a = a * 2;
			}
		}
		sum = sum + ptr[i] * a;
	}
	printf("DEC : %d, HEX %x\n", sum, sum);
	
}
void hexto(int number)
{
	int bin[5];
	int a = number;
	printf("bin : ");
	for (int i = 0; i < 5; i++) {
		bin[i] = a % 2;
		a = a / 2;
	}
	for (int i = 0; i < 5; i++) {
		printf("%d", bin[4 - i]);
	}
	printf(", DEC : %d\n", number);
}
void decto(int number)
{
	int bin[5];
	int a = number;
	printf("bin : ");
	for (int i = 0; i < 5; i++) {
		bin[i] = a % 2;
		a = a / 2;
	}
	for (int i = 0; i < 5; i++) {			// �� for���� �迭5���� 1�� printf�� ���� ��Ÿ���� �ϴ� �� ����
		printf("%d", bin[4-i]);				//�̷��� ���� �̰Ŷ� �Էºκ� �����Ǹ� ���� ����� �ڵ尡 ���õ�
	}
	printf(", HEX : %x\n", number);
}