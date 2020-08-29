#include<stdio.h> // ǥ������� ������� ����
#include<stdlib.h> // ���������� ���� ������� ����
#include<time.h> // ��������, ����ð� ǥ�ø� ���� ������� ����

int RandomList(int *); //���� ������ ���� �Լ�
void AscendingSort(int, int *); //�������� ������ ���� �Լ�
void DescendingSort(int, int *); //�������� ������ ���� �Լ�
void Exit(void); //Exit �޴�(���α׷� ����) �� �����ϱ� ���� �Լ�

int RandomList(int arr[])
{
	int length = 0; // ����ڰ� ������ ������ ���� ������ ����
	printf("Input the length of the random list: "); // ������ ���� �Է� �䱸
	scanf("%d", &length);

	srand((unsigned int)time(NULL)); // �ð��� �帧�� ���� ���Ӿ��� ���ϴ� ���� ����

	for (int i = 0; i < length; i++) // length ��ŭ ����
		arr[i] = rand() % 99 + 1; // arr[i]�� 1~99�� ���� ����

	printf("Generated random list:"); // ������ ������ ���
	for (int j = 0; j < length; j++)
		printf(" %d", arr[j]);
	printf("\n\n\n");
	return length; // length�� ��ȯ
}

void AscendingSort(int length, int arr[])
{
	printf("-sorting in ascending order\n");
	printf("Original random list:"); // ���� �� �迭 ���
	for (int r = 0; r < length; r++)
		printf(" %d", arr[r]);
	printf("\n");

	clock_t st, et; // ����ð� ǥ�ø� ���� clock_t �Լ� ���� 
	int temp = 0; // ������ ���� �ӽ�������� temp ����
	int i, j, k; // �������� ���� ����
	st = clock(); // ����ð� üũ ����
	for (i = 1; i < length; i++) // ������ ������ŭ ����
	{
		for (j = i; j >= 1; j--) // �ں��� �������� ������ ���ϱ� ���� ������
		{
			if (arr[j - 1] > arr[j]) // j��°�� ���ڰ� j-1��° ���ں��� ������ ���� ��ġ�� �ٲ� j�� ������ �̵� ��Ŵ (temp ������ �ӽ�����ҷ� �̿�) .
			{
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}

		}
		printf("Pass %d:", i); // �ѹ��� ����(Pass)���� ����� ǥ��
		for (k = 0; k < length; k++)
		{
			printf(" %d", arr[k]);
		}
		printf("\n");
	}
	et = clock(); // ����ð� üũ ����
	printf("Time elapsed: %.1lfs", (double)(et - st) / (double)1000); // ����ð��� sec ������ �Ҽ��� ù° �ڸ����� ���
	printf("\n\n\n");
}

void DescendingSort(int length, int arr[])
{
	printf("-sorting in descending order\n");
	printf("Original random list:"); // ���� �� �迭 ���
	for (int r = 0; r < length; r++)
		printf(" %d", arr[r]);
	printf("\n");

	clock_t st, et;// ����ð� ǥ�ø� ���� clock_t �Լ� ���� 
	int temp = 0;// ������ ���� �ӽ�������� temp ����
	int i, j, k;// �������� ���� ����
	st = clock();// ����ð� üũ ����
	for (i = 1; i < length; i++)// ������ ������ŭ ����
	{
		for (j = i; j >= 1; j--)// �ں��� �������� ������ ���ϱ� ���� ������
		{
			if (arr[j - 1] < arr[j]) // j��°�� ���ڰ� j-1��° ���ں��� ũ�� ���� ��ġ�� �ٲ� j�� ������ �̵� ��Ŵ (temp ������ �ӽ�����ҷ� �̿�) .
			{
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}

		}
		printf("Pass %d:", i); // �ѹ��� ����(Pass)���� ����� ǥ��
		for (k = 0; k < length; k++)
		{
			printf(" %d", arr[k]);
		}
		printf("\n");
	}
	et = clock(); // ����ð� üũ ����
	printf("Time elapsed: %.1lfs", (double)(et - st) / (double)1000); // ����ð��� sec ������ �Ҽ��� ù° �ڸ����� ���
	printf("\n\n\n");
}

void Exit(void)
{
	printf("Exiting\n"); // "Exiting" ���
}
int main() // main �Լ��� ����
{
	int arr[1000] = { 0 }; // int �� �迭 ���� �� 0���� �ʱ�ȭ
	int length = 0, sel = 0, RandomlistReady = 0; // length, sel, RandomlistReady ���� ���� �� 0���� �ʱ�ȭ
	while (1) // ���� ������
	{
		printf("-- Menu --\n"); //�޴� ���
		printf("1. Random List Generation\n");
		printf("2. Insertion Sort in Ascending Order\n");
		printf("3. Insertion Sort in Descending Order\n");
		printf("4. Exit\n");
		printf("Choose the item you want: "); // ���ϴ� �޴��� �����ϱ� ���� ����� ����
		scanf("%d", &sel);

		if (sel == 1) // ���� �޴� 1�� �����ߴٸ�
		{
			length = RandomList(arr); // length ������ RandomList(arr)�Լ��� �����Ŵ���ν� ��ȯ�޴� �� ����
			RandomlistReady = 1; // RandomlistReady�� ���� 1�� �ٲ����ν� ������ �������� ǥ��
		}
		else if (sel == 2) // ���� �޴� 2�� �����ߴٸ�
		{
			if (RandomlistReady == 0) // ���� ������ �������� ���� ���¶��
			{
				printf("Error: Random list is not ready\n"); // ���� ������ �ȵƴٴ� Error ���
				printf("\n\n\n");
			}
			else
				AscendingSort(length, arr); // ������ �����Ǿ��ٸ� AscendingSort(length, arr) ����
		}
		else if (sel == 3) // ���� �޴� 3�� �����ߴٸ�
		{
			if (RandomlistReady == 0) // ���� ������ �������� ���� ���¶��
			{
				printf("Error: Random list is not ready\n"); // ���� ������ �ȵƴٴ� Error ���
				printf("\n\n\n");
			}
			DescendingSort(length, arr); //������ �����Ǿ��ٸ� DecendingSort(length, arr) ����
		}
		else if (sel == 4) // ���� �޴� 4�� �����ߴٸ�
		{
			Exit(); //Exit �Լ� ����
			break; // ������ Ż��(���α׷� ����)
		}

	}

	return 0; // 0�� ��ȯ
} // main �Լ��� ��