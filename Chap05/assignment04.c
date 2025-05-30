/* 파일명: assignment04.c

 * 내용: 연도를 입력받아 윤년인지 검사하는 프로그램을 작성하시오.

 * 작성자: 김수경

 * 날짜: 2025.04.29.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0504();

int main()
{
	assignment0504();
	return 0;
}

void assignment0504()
{
	int year;

	printf("연도? ");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("%d년은 윤년입니다.\n", year);
	}
	else
	{
		printf("%d년은 윤년이 아닙니다.\n", year);
	}
	return;
}