/* ���ϸ�: assignment-06.c
* ����: PA06. ����Ʈ�� ������ ��������(m^2)�� �Է¹޾� �� ������ ����ϴ� ���α׷� �ۼ��ϱ�.
1m^2=0.3025��.
* �ۼ���: �����
* ��¥: 2025.4.3
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define a 0.3025

void Main();
double Compute(int x);

int main()
{
	Main();
	return 0;
}

void Main()
{
	double m = 0;
	printf("����Ʈ�� ����(��������)? ");
	scanf("%lf", &m);

	double result = Compute(m);

	printf("%.2lf �������� = %.2lf ��", m, result);
	return;
}

double Compute(int x)
{
	double result = x * a;
	return result;
}