/* ���ϸ�: assignment-10.c
* ����: PA10. ��/�޷� ȯ���� �޷��� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��ϱ�.
* �ۼ���: �����
* ��¥: 2025.4.3
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Main();
double ComputeWon(float dollar, float exchangeRate);

int main()
{
	Main();
	return 0;
}

void Main()
{
	double dollar = 0;
	double exchangeRate = 0;
	printf("USD? ");
	scanf("%lf", &dollar);
	printf("��/�޷� ȯ��? ");
	scanf("%lf", &exchangeRate);
	double won = ComputeWon(dollar, exchangeRate);
	printf("USD %.2lf = KRW %.2lf\n", dollar, won);
	return;
}

double ComputeWon(float dollar, float exchangeRate)
{
	double won = dollar * exchangeRate;
	return won;
}