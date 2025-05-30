/* 파일명: assignment-07.c
* 내용: PA07. 실수값을 입력받아 그 값의 제곱과 세제곱을 출력하기.
실수값을 입력받을 때 12.34처럼 소수 표기 방법이나 1.234e2처럼 지수 표기 방법을 둘 다 사용할 수 있게 할 것.
제곱과 세제곱을 출력할 때는 지수 표기 방법으로 출력할 것.
* 작성자: 김수경
* 날짜: 2025.4.3
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Main();
double Compute2(float x);
double Compute3(float x);

int main()
{
	Main();
	return 0;
}

void Main()
{
	double Float = 0;
	printf("실수? ");
	scanf("%lf", &Float);

	double squared = Compute2(Float);
	double cubed = Compute3(Float);

	printf("제곱: %e\n세제곱: %e", squared, cubed);
	return;
}

double Compute2(float x)
{
	double squared = x * x;
	return squared;
}

double Compute3(float x)
{
	double cubed = x * x * x;
	return cubed;
}