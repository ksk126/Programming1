/* ���ϸ�: assignment09.c

* ����: �ܹ��� ������ ��꼭 ���α׷��� �ۼ��Ͻÿ�.

* �ۼ���: �����

* ��¥: 2025.04.29.

* ����: v1.0

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

	printf("[�ܹ��� 4000��, ����Ƣ�� 2000��, �ݶ� 1500��, ��Ʈ 6500��]\n");

	printf("�ܹ��� ����? ");
	scanf("%d", &burger);

	printf("����Ƣ�� ����? ");
	scanf("%d", &side);

	printf("�ݶ� ����? ");
	scanf("%d", &drink);

	while (burger > 0 && side > 0 && drink > 0)
	{
		set++;
		burger--, side--, drink--;
	}

	printf("��ǰ��   �ܰ�  ����  �ݾ�\n");
	printf("��Ʈ     6500   %d   %d\n", set, set * 6500);
	printf("�ܹ���   4000   %d   %d\n", burger, burger * 4000);
	printf("����Ƣ�� 2000   %d   %d\n", side, side * 2000);
	printf("�ݶ�     1500   %d   %d\n", drink, drink * 1500);
	printf("--------------------------\n");
	total = (burger * 4000) + (drink * 1500) + (side * 2000) + (set * 6500);
	printf("�հ�                 %d��\n", total);
	return;
}