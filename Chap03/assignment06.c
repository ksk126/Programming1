/* 파일명: assignment-06.c
* 내용: PA06. 아파트의 면적을 제곱미터(m^2)로 입력받아 몇 평인지 출력하는 프로그램 작성하기.
1m^2=0.3025평.
* 작성자: 김수경
* 날짜: 2025.4.3
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define a 0.3025

void Main();
double Compute(int x);

int main()
{
	Main();
	return 0;
}

void Main()
{
	double m = 0;
	printf("아파트의 면적(제곱미터)? ");
	scanf("%lf", &m);

	double result = Compute(m);

	printf("%.2lf 제곱미터 = %.2lf 평", m, result);
	return;
}

double Compute(int x)
{
	double result = x * a;
	return result;
}