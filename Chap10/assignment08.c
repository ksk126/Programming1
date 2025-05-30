/* 파일명: assignment08.c

  * 내용: PRODUCT 구조체를 정의하시오. 각 제품별로 제품명, 가격, 재고를 저장할 수 있어야 한다.
  PRODUCT 구조체를 매개변수로 전달받아 제품 정보를 출력하는 print_product 함수를 정의하시오.
  PRODUCT 구조체 변수를 선언한 다음 제품명, 가격, 재고를 입력받아 저장하고 출력하는 프로그램을 작성하시오.
  참고로 제품명은 빈칸 없는 한 단어로 입력한다.

  * 작성자: 김수경

  * 날짜: 2025.06.05.

  * 버전: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "PRODUCT.h"

void assignment1008();
PRODUCT scanMenu(PRODUCT menu);
void print_product(PRODUCT *saveMenu);

int main()
{
	assignment1008();

	return 0;
}

void assignment1008()
{
	PRODUCT menu = { 0 };
	PRODUCT saveMenu[10];
	int count = 0;

	while (count < 10)
	{
		saveMenu[count++] = scanMenu(menu);

		print_product(saveMenu);
	}

	return;
}

PRODUCT scanMenu(PRODUCT menu)
{
	printf("제품명? ");
	scanf("%s", menu.name);
	printf("가격? ");
	scanf("%d", &menu.price);
	printf("재고? ");
	scanf("%d", &menu.stock);

	return menu;
}

void print_product(PRODUCT *saveMenu)
{
	printf("[%s %d원 재고:%d\n]", saveMenu->name, saveMenu->price, saveMenu->stock);

	return;
}