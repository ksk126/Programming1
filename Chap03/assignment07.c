/* ���ϸ�: assignment-07.c
* ����: PA07. �Ǽ����� �Է¹޾� �� ���� ������ �������� ����ϱ�.
�Ǽ����� �Է¹��� �� 12.34ó�� �Ҽ� ǥ�� ����̳� 1.234e2ó�� ���� ǥ�� ����� �� �� ����� �� �ְ� �� ��.
������ �������� ����� ���� ���� ǥ�� ������� ����� ��.
* �ۼ���: �����
* ��¥: 2025.4.3
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Main();
double Compute2(float x);
double Compute3(float x);

int main()
{
	Main();
	return 0;
}

void Main()
{
	double Float = 0;
	printf("�Ǽ�? ");
	scanf("%lf", &Float);

	double squared = Compute2(Float);
	double cubed = Compute3(Float);

	printf("����: %e\n������: %e", squared, cubed);
	return;
}

double Compute2(float x)
{
	double squared = x * x;
	return squared;
}

double Compute3(float x)
{
	double cubed = x * x * x;
	return cubed;
}