#include "userheader.h" //������ ���� ��������� ����

int ffff;// �������� ����Լ��� ������ ���� ���ǻ�����

//int sum(int a, int b); //userheader.h�� ������ �̸� �س�
/*
struct student
{
	int a;
	float b;
}sona;
*/

int main() //�⺻ Ÿ�� int main(void) �ƹ����� �ᵵ �������.
{
	int a; //�������� int-4B, char-1B, float-4B, double-4B unsigned int(��ȣ���� ���� ��)
	float f = 10.2; //���� �ʱ�ȭ���
	char c = 'C'; //���� �ʱ�ȭ���
	int array[5] = { 10,20,30.40,50 }; //4byte ���� 5�� ���� // �迭�� �̸��� �� �迭�� ù��° �ּҸ� ����Ų��
	char array2[6] = "APPLE"; //char�� �迭�� �ι��ڰ��
	int *ptr;  //�����ͺ��� �ּҰ��� �����Ѵ�. �� �ڷ����� ������� �ڷ����� �ּҸ� ������ ����
	int pointer = 10;
	ptr = &pointer; // ������ pointer������ �ּҰ��� ptr�� �����Ѵ� //pointer �� *ptr�� ���� ����.
	/*
	printf("%f\n", f); //%d, %c, %s, %o, %x, %X, %i // ���Ĺ��ڿ�

	scanf("%d", &a); // ���۷���,  scanf�Լ��� �ּҸ� �ѰܹްԲ� �ڵ�
	*/

	/*if (pointer > a) {		 //������ �������� ��(1), ����(0)��ȯ
		printf("%d\n", a);
	}
	else if (a < pointer) {
		printf("%d\n", pointer);
	}
	else
	{
		printf("����\n");
	}*/
	/*switch (c)	//�Է¹��� ������ ����� �����Ѵ�.
	{
	case 'C':
		printf("Wear thick clothes because of the cold weather.\n");
		break; // �ڵ��� �帧�� �ٷ�, �ݺ���  Ż��
	case 'H':
		printf("You drink more water because of the hot weather.\n");
		break;
	case 'R':
		printf("Take your umbrella.\n");
		break;
	default:
		printf("ERROR\n");
		break;
	}*/
	/*
	int k = 0;
	for (int i = 0; i < 10; i++)	//�ݺ���. �ʱⰪ, ���ǰ�, ������.
	{
		if(i == 5)
			continue; // ���ǿ� �´� �ܰ踸 ��ŵ�ϰ� ���� �ݺ������� �Ѿ��.
		printf("%d\n",k);
		k++;

	}
	*/
	/*for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 5-j; i++)	//��ø for��.
		{
			printf("*");
		}
		printf("\n");
	}*/
	/*while (1)// ����
	{
		//�۾�����
	}*/
	/*do
	{
		// ������ �ѹ� �����ϰ� ������ ���ϴ� do-while��
	} while (true);*/		//����

	/*	int L = 0;
		for (int i = 0; i < 5; i++) {
			array[i] = L;		// array[0],1,2,3,4
			L++;
		}*/
		/*L = 0;
		int cd[3][3];
		for (int i = 0; i < 3; i++)		// 2�����迭. 0,0 ���� 2,2���� ��밡���� �迭
		{
			for (int j = 0; j < 3; j++) {
				cd[i][j] = L++; // 0.0 0.1 0.2 1.0 1.1 ---- ���������� ����
			}
		}*/

		//�Լ��� ����,����, �� ������ ���ȴ�.
	/*	sum(10, 20);		// �Լ� �ݺκ�
		int op;
		op = sum(20, 30);
		printf("%d\n", op); // 50���*/

		/*	int *p;
			int abc = 10;
			p = &abc;		// p �����ͺ��� �ȿ���, abc������ �ּҰ� ����.
			printf("%d", abc); //10���
			sum2(p);
			printf("%d", abc); //20���
		}*/
		/*int array3[5] = { 10,20,30,40,50 };
		sum3(array3);*/
	/*
	char *month[12] =
	{ "JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC" };

	char **p;
	p = month;
	printf("%c\n", **p);			//J
	printf("%c\n", *(*(++p)));		//F
	printf("%c\n", *(*(++p) + 1));	//MAR �� A
	printf("%c\n", *(*(p + 3) + 2)); //JUN �� N

	*/
	/*struct student risin;		//����ü �����͸� ȿ�������� ����
	risin.a = 10;
	risin.b = 10.2;
	sona.a=20;
	sona.b = 20.2;
	*/
}
/*int sum(int a, int b) // �Լ� ���� �κ�.
{
	int c; 
	c = a + b;
	return c; // �Լ��� ���ϰ��� sum�Լ��� �ִ� ����c�� return�Ѵ�. ����?-> main�Լ� op������.
	//call by value.
}*/
/*int sum2(int *a)
{
	*a = 20;
} //call by reference
*/
/*
int sum3(int *a) // array3[];
{
	*(a + 1) = 10;  //array3[1] = 10; �� ����.
} //call by reference
*/





