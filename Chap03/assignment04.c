/* ���ϸ�: assignment-04.c
* ����: PA04. ��ü�� �ۿ��� ���� ũ��� ���� �������� �̵��� �Ÿ��� �Է¹޾� �� ���� ���� ���ϴ� ���α׷� �ۼ��ϱ�.
���� ũ��� N������, �̵��� �Ÿ��� m������ �Է¹��� ��.
* �ۼ���: �����
* ��¥: 2025.4.3
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Main();
double Compute(int n, int M);

int main()
{
	Main();
	return 0;
}

void Main()
{
	double N = 0, m = 0;

	printf("��(N)? ");
	scanf("%lf", &N);
	printf("�̵��Ÿ�(m)? ");
	scanf("%lf", &m);

	double J = Compute(N, m);

	printf("%.2lf J", J);
	return;
}

double Compute(int n, int M)
{
	double J = n * M;
	return J;
}