/* ���ϸ�: assignment01.c

  * ����: get_perimeter �Լ��� �̿��ؼ� �Է¹��� ����, ������ ���̷� ���簢���� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

  * �ۼ���: �����

  * ��¥: 2025.05.23.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0601();
int get_perimeter(int x, int y);

int main()
{
	assignment0601();

	return 0;
}

void assignment0601()
{
	int x = 0, y = 0, result = 0;
	printf("����? ");
	scanf("%d", &x);
	printf("����? ");
	scanf("%d", &y);

	result = get_perimeter(x, y);

	printf("���簢���� �ѷ�: %d", result);

	return;
}

int get_perimeter(int x, int y)
{
	return (x + y) * 2;
}