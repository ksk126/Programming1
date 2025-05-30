/* 파일명: assignment-08.c
* 내용: PA08. 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램을 작성하시오.
이때 파이는 3.141592라고 하자.
* 작성자: 김수경
* 날짜: 2025.4.9
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment03();
double calculateVolume(double x);

int main()
{
	assignment0403();
	return 0;
}

void assignment0403()
{
	double radius = 0;

	printf("반지름? ");
	scanf("%lf", &radius);

	double volume = calculateVolume(radius);

	printf("부피: %lf\n", volume);
}

double calculateVolume(double x)
{
	double volume = (4.0 / 3.0) * 3.141592 * x * x * x;
	return volume;
}