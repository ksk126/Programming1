/* 파일명: assignment-10.c
* 내용: PA10. 원/달러 환율과 달러를 입력받아 몇 원인지 출력하는 프로그램을 작성하기.
* 작성자: 김수경
* 날짜: 2025.4.3
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Main();
double ComputeWon(float dollar, float exchangeRate);

int main()
{
	Main();
	return 0;
}

void Main()
{
	double dollar = 0;
	double exchangeRate = 0;
	printf("USD? ");
	scanf("%lf", &dollar);
	printf("원/달러 환율? ");
	scanf("%lf", &exchangeRate);
	double won = ComputeWon(dollar, exchangeRate);
	printf("USD %.2lf = KRW %.2lf\n", dollar, won);
	return;
}

double ComputeWon(float dollar, float exchangeRate)
{
	double won = dollar * exchangeRate;
	return won;
}