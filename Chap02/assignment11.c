/*
* ���ϸ�: Assignment11
* ����: PA11. ������ ���� ���� 3.14159265��� �� ��, ���� ���� ���� ���� ������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Ҽ��� ���� 2�ڸ�����, �Ҽ��� ���� 4�ڸ�����, �Ҽ��� ���� 6�ڸ�����, �Ҽ��� ���� 8�ڸ����� ���� ����ϰ�, ���� ǥ��ε� ����غ���.
* �ۼ���: �����
* 2025.3.20
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Main(void);

int main()
{
	Main();
	return 0;
}

void Main(void)
{
	double f = 3.14159265;
	printf("%.2f\n", f);
	printf("%.4f\n", f);
	printf("%.6f\n", f);
	printf("%.8lf\n", f);
	printf("%e\n", f);
	return;
}