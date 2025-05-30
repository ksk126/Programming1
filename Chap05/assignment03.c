/* 파일명: assignment03.c

 * 내용: 거스름돈의 금액을 입력받아 오만원, 만원, 천원, 백원, 십원짜리가 각각 몇 개 필요한지 구해서 출력하시오.
 십원 미만 단위는 절사한다.

 * 작성자: 김수경

 * 날짜: 2025.04.29.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0503();
int computeMoney(int money);

int main()
{
	assignment0503();
	return 0;
}

void assignment0503()
{
	int money = 0;
	printf("거스름돈? ");
	scanf("%d", &money);
	computeMoney(money);
	return;
}

int computeMoney(int money)
{
	printf("거스름돈 (10원미만 절사): %d\n", money - (money % 10));
	if (money % 50000 != 0)
	{
		printf("50000원: %d장\n", money / 50000);
		money -= (money / 50000) * 50000;
	}
	if (money % 10000 != 0)
	{
		printf("10000원: %d장\n", money / 10000);
		money -= (money / 10000) * 10000;
	}
	if (money % 5000 != 0)
	{
		printf("5000원: %d장\n", money / 5000);
		money -= (money / 5000) * 5000;
	}
	if (money % 1000 != 0)
	{
		printf("1000원: %d장\n", money / 1000);
		money -= (money / 1000) * 1000;
	}
	if (money % 100 != 0)
	{
		printf("100원: %d개\n", money / 100);
		money -= (money / 100) * 100;
	}
	if (money % 10 != 0)
	{
		printf("10원: %d개", money / 10);
		money -= (money / 10) * 10;
	}

	return 0;
}