/* 파일명: assignment-02.c
* 내용: PA02. 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램 작성하기
* 작성자: 김수경
* 날짜: 2025.4.3
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Main();
int ExtentCompute(int x, int y);
int RoundCompute(int x, int y);

int main()
{
	Main();
	return 0;
}

void Main()
{
	int nx = 0, ny = 0;

	printf("가로의 길이? ");
	scanf("%d", &nx);
	printf("세로의 길이? ");
	scanf("%d", &ny);

	int extent = ExtentCompute(nx, ny);
	int round = RoundCompute(nx, ny);

	printf("직사각형의 넓이: %d\n직사각형의 둘레: %d", extent, round);
	return;
}

int ExtentCompute(int x, int y)
{
	int extent = x * y;
	return extent;
}

int RoundCompute(int x, int y)
{
	int round = 2 * (x + y);
	return round;
}