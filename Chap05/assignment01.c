/* ���ϸ�: assignment01.c

 * ����: ���� ��ǥ(x, y)�� �Է¹޾� ��ũ�� ���� ���� ���� ���� ������ �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: �����

 * ��¥: 2025.04.29.

 * ����: v1.0

 */


void assignment0501();

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	assignment0501();
	return 0;
}

void assignment0501()
{
	int left, top, right, bottom, x, y;

	printf("���� ������ �»���� (left, top)? ");
	scanf("%d %d", &left, &top);

	printf("���� ������ ���ϴ��� (right, bottom)? ");
	scanf("%d %d", &right, &bottom);

	printf("���� ��ǥ (x, y)? ");
	scanf("%d %d", &x, &y);

	if (left <= x && x <= right && top <= y && y <= bottom)
	{
		printf("���� ���� ���� ���Դϴ�.\n");
	}
	else
	{
		printf("���� ���� ���� ���Դϴ�.\n");
	}
	return;
}