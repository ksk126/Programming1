/* 파일명: assignment03.c

* 내용 : distance 함수를 이용해서 입력받은 시작점부터 끝점 사이의 끝점 사이의 직선 거리를 구하는 프로그램을 작성하시오.

* 작성자 : 김수경

* 날짜 : 2025.05.23.

* 버전 : v1.0

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void assignment0603();
double distance(int x1, int y1, int x2, int y2);

int main()
{
	assignment0603();

	return 0;
}

void assignment0603()
{
	int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
	double result = 0;
	printf("직선의 시작점 좌표? ");
	scanf("%d %d", &x1, &y1);
	printf("직선의 끝점 좌표? ");
	scanf("%d %d", &x2, &y2);

	result = distance(x1, y1, x2, y2);

	printf("(%d, %d)~(%d, %d) 직선의 길이: %.6lf", x1, y1, x2, y2, result);

	return;
}

double distance(int x1, int y1, int x2, int y2)
{
	double result = hypot(x2 - x1, y2 - y1);
	return result;
}