/* ���ϸ�: assignment03.c

 * ����: �Ž������� �ݾ��� �Է¹޾� ������, ����, õ��, ���, �ʿ�¥���� ���� �� �� �ʿ����� ���ؼ� ����Ͻÿ�.
 �ʿ� �̸� ������ �����Ѵ�.

 * �ۼ���: �����

 * ��¥: 2025.04.29.

 * ����: v1.0

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
	printf("�Ž�����? ");
	scanf("%d", &money);
	computeMoney(money);
	return;
}

int computeMoney(int money)
{
	printf("�Ž����� (10���̸� ����): %d\n", money - (money % 10));
	if (money % 50000 != 0)
	{
		printf("50000��: %d��\n", money / 50000);
		money -= (money / 50000) * 50000;
	}
	if (money % 10000 != 0)
	{
		printf("10000��: %d��\n", money / 10000);
		money -= (money / 10000) * 10000;
	}
	if (money % 5000 != 0)
	{
		printf("5000��: %d��\n", money / 5000);
		money -= (money / 5000) * 5000;
	}
	if (money % 1000 != 0)
	{
		printf("1000��: %d��\n", money / 1000);
		money -= (money / 1000) * 1000;
	}
	if (money % 100 != 0)
	{
		printf("100��: %d��\n", money / 100);
		money -= (money / 100) * 100;
	}
	if (money % 10 != 0)
	{
		printf("10��: %d��", money / 10);
		money -= (money / 10) * 10;
	}

	return 0;
}