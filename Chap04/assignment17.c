/* 파일명: assignment-17.c
* 내용: PA17. 32비트 크기의 데이터(부호 없는 정수형)에는 0~31번 비트가 존재한다.
7번째 비트만 1인 값, 15번째 비트만 1인 값, 23번째 비트만 1인 값, 31번째 비트만 1인 값을 구해서 16진수와 10진수로 출력하는 프로그램을 작성하시오.
* 작성자: 김수경
* 날짜: 2025.4.9
* 버전: v1.0
*/

#include <stdio.h>

void assignment0417();

int main()
{
	assignment0417();
	return 0;
}

void assignment0417()
{
	int bit7 = 0x80;
	int bit15 = 0x8000;
	int bit23 = 0x800000;
	int bit31 = 0x80000000;

	printf("7번 비트만 1인 값: %08x %d\n", bit7, bit7);
	printf("15번 비트만 1인 값: %08x %d\n", bit15, bit15);
	printf("23번 비트만 1인 값: %08x %d\n", bit23, bit23);
	printf("31번 비트만 1인 값: %08x %d\n", bit31, bit31);

	return;
}