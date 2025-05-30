/* 파일명: assignment09.c

* 내용: 햄버거 가게의 계산서 프로그램을 작성하시오.

* 작성자: 김수경

* 날짜: 2025.04.29.

* 버전: v1.0

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0509();

int main()
{
	assignment0509();
	return 0;
}

void assignment0509()
{
	int burger = 0;
	int drink = 0;
	int side = 0;
	int set = 0;
	int total = 0;

	printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원]\n");

	printf("햄버거 개수? ");
	scanf("%d", &burger);

	printf("감자튀김 개수? ");
	scanf("%d", &side);

	printf("콜라 개수? ");
	scanf("%d", &drink);

	while (burger > 0 && side > 0 && drink > 0)
	{
		set++;
		burger--, side--, drink--;
	}

	printf("상품명   단가  수량  금액\n");
	printf("세트     6500   %d   %d\n", set, set * 6500);
	printf("햄버거   4000   %d   %d\n", burger, burger * 4000);
	printf("감자튀김 2000   %d   %d\n", side, side * 2000);
	printf("콜라     1500   %d   %d\n", drink, drink * 1500);
	printf("--------------------------\n");
	total = (burger * 4000) + (drink * 1500) + (side * 2000) + (set * 6500);
	printf("합계                 %d원\n", total);
	return;
}