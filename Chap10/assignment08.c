/* ���ϸ�: assignment08.c

  * ����: PRODUCT ����ü�� �����Ͻÿ�. �� ��ǰ���� ��ǰ��, ����, ��� ������ �� �־�� �Ѵ�.
  PRODUCT ����ü�� �Ű������� ���޹޾� ��ǰ ������ ����ϴ� print_product �Լ��� �����Ͻÿ�.
  PRODUCT ����ü ������ ������ ���� ��ǰ��, ����, ��� �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
  ����� ��ǰ���� ��ĭ ���� �� �ܾ�� �Է��Ѵ�.

  * �ۼ���: �����

  * ��¥: 2025.06.05.

  * ����: v1.0

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
	printf("��ǰ��? ");
	scanf("%s", menu.name);
	printf("����? ");
	scanf("%d", &menu.price);
	printf("���? ");
	scanf("%d", &menu.stock);

	return menu;
}

void print_product(PRODUCT *saveMenu)
{
	printf("[%s %d�� ���:%d\n]", saveMenu->name, saveMenu->price, saveMenu->stock);

	return;
}