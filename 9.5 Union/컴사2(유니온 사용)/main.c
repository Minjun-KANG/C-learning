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
	printf("%d %d %d\n", &data.a, &data.b, &data.c); // 주소가 같다.
	printf("%d\n", sizeof(data.a)); //구조체 인경우 8이나옴 왜 7이아니라? 
	/* 32bit 2GHz VS 64bit 1GHz 누가 더 빠를까?
	같다.
	64bit 니깐 8bit 씩 읽어오게 끔 만들어져 있다.
	그래서 8yte씩 짤려서 운이 좋지않으면 변수가 짤려 읽혀 2번 읽을 수 도 있다. 
	그래서 이렇게 안만든다. 그래서 운영체제가 읽을 때 8byte씩 읽도록 만들어져 진다.
	그래서 8로 찍히는건다. 위와같은경우 그래서 1비트를 비워놔라 라는 거다.
	*/

	// 12345678 부터 5678 , 78 이렇게 나오는데 
	// int는 4바이트니깐 12345678 다나오는데 그 뒤에 주소값이 같으니깐 short int는 5678 char 는 78 나온다.
	// stack 구조에 의해, x86 littel endian 값을 4바이트를 넣으면 뒤쪽부터 저장함. 123456768 그래서 78563412
	// 이 저장되서 c 출력햇을 때 앞 78이 나오는것. 이 저장이 리틀 엔디안 이다.
	// 우리 스마트폰은 ARM인데 이놈은 BIG endian. Byte Order 
	// network 프로그래밍은 big endian 을 사용해서 endian -> big 으로 바꿔주는 게 있다. 
	// 큰숫자부터넘어감 12 부터 넘어간단 소리
}