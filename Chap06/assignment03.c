/* ���ϸ�: assignment03.c

* ���� : distance �Լ��� �̿��ؼ� �Է¹��� ���������� ���� ������ ���� ������ ���� �Ÿ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

* �ۼ��� : �����

* ��¥ : 2025.05.23.

* ���� : v1.0

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void assignment0603();
double distance(int x1, int y1, int x2, int y2);

int main()
{
	assignment0603();

	return 0;
}

void assignment0603()
{
	int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
	double result = 0;
	printf("������ ������ ��ǥ? ");
	scanf("%d %d", &x1, &y1);
	printf("������ ���� ��ǥ? ");
	scanf("%d %d", &x2, &y2);

	result = distance(x1, y1, x2, y2);

	printf("(%d, %d)~(%d, %d) ������ ����: %.6lf", x1, y1, x2, y2, result);

	return;
}

double distance(int x1, int y1, int x2, int y2)
{
	double result = hypot(x2 - x1, y2 - y1);
	return result;
}