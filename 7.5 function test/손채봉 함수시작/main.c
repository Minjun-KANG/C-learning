#include<stdio.h>

void mathoperation(int x, int y, int *s, int *d);
main()
{
	int x = 20, y = 10, s, d;
	mathoperation(x, y, &s, &d);	// mathoperation ���� x ,y�ѱ��. �׸��� s������ d������ �ּڰ� �ѱ��
									//& �ּ� �̾Ƴ���
	printf(" s=%d\n d=%d\n", s, d);
}
void mathoperation(int a, int b, int *sum, int *diff)
{
	*sum = a + b;
	*diff = a - b; //������ 3�� * ���빰�̾Ƴ���
}// &s �� &s�� �ּҸ� sum ���� �Ѱ��ְ� sum�� �ڽ��� �����Ϳ� ����ִ� &s�� �ּҸ� *�� �����ؼ� ���빰�� ����Ѵ�
// �״ϱ� ������ print sum �ϸ� s�� �ּڰ������� print s�ϸ� ������ ������ �����°���.
// * , ! < ���׿����� < ��ȣ���� ������ �켱������ �ſ� ���� �켱������ ������.