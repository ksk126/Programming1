/* ���ϸ�: assignment-08.c
* ����: PA08. �������� ���̸� �Է¹޾� ���� ���Ǹ� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�̶� ���̴� 3.141592��� ����.
* �ۼ���: �����
* ��¥: 2025.4.9
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment03();
double calculateVolume(double x);

int main()
{
	assignment0403();
	return 0;
}

void assignment0403()
{
	double radius = 0;

	printf("������? ");
	scanf("%lf", &radius);

	double volume = calculateVolume(radius);

	printf("����: %lf\n", volume);
}

double calculateVolume(double x)
{
	double volume = (4.0 / 3.0) * 3.141592 * x * x * x;
	return volume;
}