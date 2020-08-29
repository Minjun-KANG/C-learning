#include<stdio.h> // 표준입출력 헤더파일 선언
#include<stdlib.h> // 난수생성을 위한 헤더파일 선언
#include<time.h> // 난수생성, 수행시간 표시를 위한 헤더파일 선언

int RandomList(int *); //난수 생성을 위한 함수
void AscendingSort(int, int *); //오름차순 정렬을 위한 함수
void DescendingSort(int, int *); //내림차순 정렬을 위한 함수
void Exit(void); //Exit 메뉴(프로그램 종료) 를 구성하기 위한 함수

int RandomList(int arr[])
{
	int length = 0; // 사용자가 지정한 난수의 갯수 저장할 변수
	printf("Input the length of the random list: "); // 난수의 갯수 입력 요구
	scanf("%d", &length);

	srand((unsigned int)time(NULL)); // 시간의 흐름에 따라 끊임없이 변하는 난수 생성

	for (int i = 0; i < length; i++) // length 만큼 루프
		arr[i] = rand() % 99 + 1; // arr[i]에 1~99의 난수 저장

	printf("Generated random list:"); // 생성된 난수를 출력
	for (int j = 0; j < length; j++)
		printf(" %d", arr[j]);
	printf("\n\n\n");
	return length; // length를 반환
}

void AscendingSort(int length, int arr[])
{
	printf("-sorting in ascending order\n");
	printf("Original random list:"); // 정렬 전 배열 출력
	for (int r = 0; r < length; r++)
		printf(" %d", arr[r]);
	printf("\n");

	clock_t st, et; // 수행시간 표시를 위한 clock_t 함수 선언 
	int temp = 0; // 정렬을 위한 임시저장장소 temp 선언
	int i, j, k; // 루프문을 위한 변수
	st = clock(); // 수행시간 체크 시작
	for (i = 1; i < length; i++) // 난수의 개수만큼 루프
	{
		for (j = i; j >= 1; j--) // 뒤부터 역순으로 난수를 비교하기 위한 루프문
		{
			if (arr[j - 1] > arr[j]) // j번째의 숫자가 j-1번째 숫자보다 작으면 둘의 위치를 바꿔 j를 앞으로 이동 시킴 (temp 변수를 임시저장소로 이용) .
			{
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}

		}
		printf("Pass %d:", i); // 한번의 루프(Pass)마다 결과를 표시
		for (k = 0; k < length; k++)
		{
			printf(" %d", arr[k]);
		}
		printf("\n");
	}
	et = clock(); // 수행시간 체크 종료
	printf("Time elapsed: %.1lfs", (double)(et - st) / (double)1000); // 수행시간을 sec 단위로 소수점 첫째 자리까지 출력
	printf("\n\n\n");
}

void DescendingSort(int length, int arr[])
{
	printf("-sorting in descending order\n");
	printf("Original random list:"); // 정렬 전 배열 출력
	for (int r = 0; r < length; r++)
		printf(" %d", arr[r]);
	printf("\n");

	clock_t st, et;// 수행시간 표시를 위한 clock_t 함수 선언 
	int temp = 0;// 정렬을 위한 임시저장장소 temp 선언
	int i, j, k;// 루프문을 위한 변수
	st = clock();// 수행시간 체크 시작
	for (i = 1; i < length; i++)// 난수의 개수만큼 루프
	{
		for (j = i; j >= 1; j--)// 뒤부터 역순으로 난수를 비교하기 위한 루프문
		{
			if (arr[j - 1] < arr[j]) // j번째의 숫자가 j-1번째 숫자보다 크면 둘의 위치를 바꿔 j를 앞으로 이동 시킴 (temp 변수를 임시저장소로 이용) .
			{
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}

		}
		printf("Pass %d:", i); // 한번의 루프(Pass)마다 결과를 표시
		for (k = 0; k < length; k++)
		{
			printf(" %d", arr[k]);
		}
		printf("\n");
	}
	et = clock(); // 수행시간 체크 종료
	printf("Time elapsed: %.1lfs", (double)(et - st) / (double)1000); // 수행시간을 sec 단위로 소수점 첫째 자리까지 출력
	printf("\n\n\n");
}

void Exit(void)
{
	printf("Exiting\n"); // "Exiting" 출력
}
int main() // main 함수의 시작
{
	int arr[1000] = { 0 }; // int 형 배열 선언 및 0으로 초기화
	int length = 0, sel = 0, RandomlistReady = 0; // length, sel, RandomlistReady 변수 선언 및 0으로 초기화
	while (1) // 무한 루프문
	{
		printf("-- Menu --\n"); //메뉴 출력
		printf("1. Random List Generation\n");
		printf("2. Insertion Sort in Ascending Order\n");
		printf("3. Insertion Sort in Descending Order\n");
		printf("4. Exit\n");
		printf("Choose the item you want: "); // 원하는 메뉴를 선택하기 위한 입출력 구문
		scanf("%d", &sel);

		if (sel == 1) // 만약 메뉴 1을 선택했다면
		{
			length = RandomList(arr); // length 변수에 RandomList(arr)함수를 실행시킴으로써 반환받는 값 저장
			RandomlistReady = 1; // RandomlistReady의 값을 1로 바꿈으로써 난수가 생성됨을 표시
		}
		else if (sel == 2) // 만약 메뉴 2를 선택했다면
		{
			if (RandomlistReady == 0) // 만약 난수가 생성되지 않은 상태라면
			{
				printf("Error: Random list is not ready\n"); // 난수 생성이 안됐다는 Error 출력
				printf("\n\n\n");
			}
			else
				AscendingSort(length, arr); // 난수가 생성되었다면 AscendingSort(length, arr) 실행
		}
		else if (sel == 3) // 만약 메뉴 3을 선택했다면
		{
			if (RandomlistReady == 0) // 만약 난수가 생성되지 않은 상태라면
			{
				printf("Error: Random list is not ready\n"); // 난수 생성이 안됐다는 Error 출력
				printf("\n\n\n");
			}
			DescendingSort(length, arr); //난수가 생성되었다면 DecendingSort(length, arr) 실행
		}
		else if (sel == 4) // 만약 메뉴 4를 선택했다면
		{
			Exit(); //Exit 함수 실행
			break; // 루프문 탈출(프로그램 종료)
		}

	}

	return 0; // 0의 반환
} // main 함수의 끝