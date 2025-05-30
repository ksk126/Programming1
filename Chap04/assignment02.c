/* 파일명: assignment-02.c
* 내용: PA02. 화씨 온도(F)를 실수로 입력받아 섭씨 온도(C)로 변환해서 출력하는 프로그램을 작성하시오.
* 작성자: 김수경
* 날짜: 2025.4.9
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0402();
double temperature(double x);

int main()
{
	assignment0402();
	return 0;
}

void assignment0402()
{
	double fahrenheit = 0;

	printf("화씨온도? ");
	scanf("%lf", &fahrenheit);

	double celsius = temperature(fahrenheit);

	printf("%.2lf F = %.2lf C", fahrenheit, celsius);
}

double temperature(double x)
{
	double celsius = (x - 32) * 5 / 9;
	return celsius;
}