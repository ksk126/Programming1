/* 파일명: assignment08.c

* 내용: 비트 연산을 수행하는 계산기를 프로그램하시오.

* 작성자: 김수경

* 날짜: 2025.04.29.

* 버전: v1.0

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0508();

int main()
{
	assignment0508();
	return 0;
}

void assignment0508()
{
	unsigned int a = 0, b = 0;
	char ch = 0;

	printf("비트 연산 계산기? ");
	scanf("%x %c %x", &a, &ch, &b);

	if (ch == '&')
	{
		printf("%x %c %x = %x\n", a, ch, b, a & b);
	}
	else if (ch == '|')
	{
		printf("%x %c %x = %x\n", a, ch, b, a | b);
	}
	else if (ch == ' ^ ')
	{
		printf("%x %c %x = %x\n", a, ch, b, a ^ b);
	}
}