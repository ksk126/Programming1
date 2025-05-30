/* 파일명: assignment01.c

  * 내용: get_perimeter 함수를 이용해서 입력받은 가로, 세로의 길이로 직사각형의 둘레를 구하는 프로그램을 작성하시오.

  * 작성자: 김수경

  * 날짜: 2025.05.23.

  * 버전: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0601();
int get_perimeter(int x, int y);

int main()
{
	assignment0601();

	return 0;
}

void assignment0601()
{
	int x = 0, y = 0, result = 0;
	printf("가로? ");
	scanf("%d", &x);
	printf("세로? ");
	scanf("%d", &y);

	result = get_perimeter(x, y);

	printf("직사각형의 둘레: %d", result);

	return;
}

int get_perimeter(int x, int y)
{
	return (x + y) * 2;
}