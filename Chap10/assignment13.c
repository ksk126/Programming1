/* ���ϸ�: assignment13.c

  * ����: RECT ����ü�� �����Ͻÿ�. ���簢���� ���ϴ����� ���������� �����Ǹ�
  ���� ��ǥ�� POINT ����ü�� �̿��ؼ� ��Ÿ����. ���簢�� ������ ����ϴ� print_rect �Լ��� �����ϰ�
  RECT ����ü ������ �����ؼ� ���簢�� ������ �Է¹ް� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

  * �ۼ���: �����

  * ��¥: 2025.06.05.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "RECT.h"

void assignment1013();
void print_rect(RECT point);

int main()
{
	assignment1013();

	return 0;
}

void assignment1013()
{
	RECT point;
	printf("���簢���� ���ϴ���(x,y)? ");
	scanf("%d %d", &point.left_bottom.x, &point.left_bottom.y);
	printf("���簢���� ������(x,y)? ");
	scanf("%d %d", &point.right_top.x, &point.right_top.y);

	print_rect(point);

	return;
}

void print_rect(RECT point)
{
	printf("[RECT ���ϴ���:(%d, %d) ������:(%d, %d)]", point.left_bottom.x, point.left_bottom.y,
		point.right_top.x, point.right_top.y);

	return;
}