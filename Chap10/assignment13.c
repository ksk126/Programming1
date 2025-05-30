/* 파일명: assignment13.c

  * 내용: RECT 구조체를 정의하시오. 직사각형은 좌하단점과 우상단점으로 구성되며
  점의 좌표는 POINT 구조체를 이용해서 나타낸다. 직사각형 정보를 출력하는 print_rect 함수를 정의하고
  RECT 구조체 변수를 선언해서 직사각형 정보를 입력받고 출력하는 프로그램을 작성하시오.

  * 작성자: 김수경

  * 날짜: 2025.06.05.

  * 버전: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "RECT.h"

void assignment1013();
void print_rect(RECT point);

int main()
{
	assignment1013();

	return 0;
}

void assignment1013()
{
	RECT point;
	printf("직사각형의 좌하단점(x,y)? ");
	scanf("%d %d", &point.left_bottom.x, &point.left_bottom.y);
	printf("직사각형의 우상단점(x,y)? ");
	scanf("%d %d", &point.right_top.x, &point.right_top.y);

	print_rect(point);

	return;
}

void print_rect(RECT point)
{
	printf("[RECT 좌하단점:(%d, %d) 우상단점:(%d, %d)]", point.left_bottom.x, point.left_bottom.y,
		point.right_top.x, point.right_top.y);

	return;
}