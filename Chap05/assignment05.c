/* ���ϸ�: assignment05.c

* ����: �µ��� �Է¹޾� ���� �µ��� ȭ�� �µ���, ȭ�� �µ��� ���� �µ��� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�.

* �ۼ���: �����

* ��¥: 2025.04.29.

* ����: v1.0

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0505();
double computeC(int temp);
double computeF(int temp);

int main()
{
	assignment0505();
	return 0; // 'main' �Լ��� ��ȯ�� �߰�
}

void assignment0505()
{
	double temp = 0;
	char type = 0;
	char type1 = 0;
	double result = 0.0;
	printf("�µ�? ");
	scanf("%lf %c", &temp, &type);

	if (type == 'C')
	{
		type1 = 'F';
		result = computeF(temp);
	}
	else if (type == 'F')
	{
		type1 = 'C';
		result = computeC(temp);
	}

	printf("%.2lf %c ==> %.2lf %c", temp, type, result, type1);
	return;
}

double computeF(int temp)
{
	return (temp * 9.0 / 5.0) + 32;
}


double computeC(int temp)
{
	return (temp - 32) * 5.0 / 9.0;
}