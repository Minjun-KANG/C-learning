#include<stdio.h>

union x {
	unsigned int a; //4 byte
	unsigned short int b; // 2byte
	unsigned char c;
};

main() {
	union x data;
	data.a = 0x12345678;
	printf("%x\n", data.a);
	printf("%x\n", data.b);
	printf("%x\n", data.c);
	printf("%d %d %d\n", &data.a, &data.b, &data.c); // �ּҰ� ����.
	printf("%d\n", sizeof(data.a)); //����ü �ΰ�� 8�̳��� �� 7�̾ƴ϶�? 
	/* 32bit 2GHz VS 64bit 1GHz ���� �� ������?
	����.
	64bit �ϱ� 8bit �� �о���� �� ������� �ִ�.
	�׷��� 8yte�� ©���� ���� ���������� ������ ©�� ���� 2�� ���� �� �� �ִ�. 
	�׷��� �̷��� �ȸ����. �׷��� �ü���� ���� �� 8byte�� �е��� ������� ����.
	�׷��� 8�� �����°Ǵ�. ���Ͱ������ �׷��� 1��Ʈ�� ������� ��� �Ŵ�.
	*/

	// 12345678 ���� 5678 , 78 �̷��� �����µ� 
	// int�� 4����Ʈ�ϱ� 12345678 �ٳ����µ� �� �ڿ� �ּҰ��� �����ϱ� short int�� 5678 char �� 78 ���´�.
	// stack ������ ����, x86 littel endian ���� 4����Ʈ�� ������ ���ʺ��� ������. 123456768 �׷��� 78563412
	// �� ����Ǽ� c ������� �� �� 78�� �����°�. �� ������ ��Ʋ ����� �̴�.
	// �츮 ����Ʈ���� ARM�ε� �̳��� BIG endian. Byte Order 
	// network ���α׷����� big endian �� ����ؼ� endian -> big ���� �ٲ��ִ� �� �ִ�. 
	// ū���ں��ͳѾ 12 ���� �Ѿ�� �Ҹ�
}