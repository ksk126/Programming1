/* ���ϸ�: assignment-01.c
* ����: PA01. �� ���� ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷� �ۼ��ϱ�
* �ۼ���: �����
* ��¥: 2025.4.3
* ����: v1.0.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Main();
int ExtentCompute(int x);
int RoundCompute(int x);

int main()
{
	Main();
	return 0;
}

void Main()
{
	int n = 0;

	printf("�� ���� ����? ");
	scanf("%d", &n);

	int extent = ExtentCompute(n);
	int round = RoundCompute(n);

	printf("���簢���� ����: %d\n���簢���� �ѷ�: %d", extent, round);
	return;
}

int ExtentCompute(int x)
{
	int extent = x * x;
	return extent;
}

int RoundCompute(int x)
{
	int round = x * 4;
	return round;
}