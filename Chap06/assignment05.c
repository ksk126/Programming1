/* ���ϸ�: assignment05.c

  * ����: 0�� �Էµ� ������ �Էµ� �����鿡 ���ؼ� ¦���� ������ Ȧ���� ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

  * �ۼ���: �����

  * ��¥: 2025.05.23.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0605();
void is_even();
void is_odd();

int even = 0, odd = 0;

int main()
{
	assignment0605();

	return 0;
}

void assignment0605()
{
	int val = 0;
	printf("������ ��ĭ���� �����ؼ� �Է��ϼ���.(�������� 0 �Է�)\n");

	do
	{
		scanf("%d", &val);

		if (val != 0)
		{
			if (val % 2 == 0)
			{
				is_even();
			}
			else
			{
				is_odd();
			}
		}
		else
		{
			break;
		}
	} while (1);

	printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.", even, odd);

	return;
}

void is_even()
{
	even++;

	return 0;
}

void is_odd()
{
	odd++;

	return 0;
}