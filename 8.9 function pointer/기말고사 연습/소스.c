	// ������ �Լ�
	#include<stdio.h>

	void sayhello();// �Լ��� �����ͷ� ȣ���ϴ� ����
	void funcdemo();

	main()
	{
		void(*ptrfunc)();// ù��° ��ȣ()�Լ��̸�? �Լ�������?�ι�°��ȣ()���Լ��� �μ�?
		ptrfunc = funcdemo;// void (*funcdeom)(int, int); �̷������� ����ϴµ�
		void(*sayhelloptr)() = sayhello;

		(*sayhelloptr)();
		ptrfunc();
	}

	void sayhello()
	{
		printf("HEllo \n\n");
	}
	void funcdemo()
	{
		printf("pointer to function\n\n");
	}