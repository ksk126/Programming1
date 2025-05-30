/* 파일명: assignment01.c

 * 내용: 점의 좌표(x, y)를 입력받아 스크린 상의 선택 영역 내의 점인지 검사하는 프로그램을 작성하시오.

 * 작성자: 김수경

 * 날짜: 2025.04.29.

 * 버전: v1.0

 */


void assignment0501();

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	assignment0501();
	return 0;
}

void assignment0501()
{
	int left, top, right, bottom, x, y;

	printf("선택 영역의 좌상단점 (left, top)? ");
	scanf("%d %d", &left, &top);

	printf("선택 영역의 우하단점 (right, bottom)? ");
	scanf("%d %d", &right, &bottom);

	printf("점의 좌표 (x, y)? ");
	scanf("%d %d", &x, &y);

	if (left <= x && x <= right && top <= y && y <= bottom)
	{
		printf("선택 영역 내의 점입니다.\n");
	}
	else
	{
		printf("선택 영역 외의 점입니다.\n");
	}
	return;
}