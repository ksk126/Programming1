/* 파일명: assignment-15.c
* 내용: PA15. 환전수수료울은 1.75%로 정해져 있다고 가정하고 원-달러 매매기준율과 환전우대율(%)를 입력받아 달러를 살 때 적용되는 환율을 결정하고,
구입하고자 하는 달러가 얼마인지 입력받아서 몇 원에 해당하는지 출력하는 프로그램을 작성하시오.
* 작성자: 김수경
* 날짜: 2025.4.9
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define charge 1.75

void assignment0415();
double computeExchangerate(double trading, double exchange);

int main()
{
	assignment0415();
	return 0;
}

void assignment0415()
{
	double tradingrate = 0, Pexchangerate = 0, dollar = 0;

	printf("원/달러 매매기준율? ");
	scanf("%lf", &tradingrate);
	printf("환율우대율(0~100%)? ");
	scanf("%lf", &Pexchangerate);

	double exchangerate = computeExchangerate(tradingrate, Pexchangerate);

	printf("달러 살 때 환율은 %f입니다.\n", exchangerate);

	printf("구입할 달러(USD)? ");
	scanf("%lf", &dollar);

	printf("USD %.2lf 살 때 ==> KRW %.2lf", dollar, dollar * exchangerate);

	return;

}

double computeExchangerate(double trading, double exchange)
{
	double exchangerate = trading + ((trading / 100) * charge * (1 - exchange / 100));

	return exchangerate;
}