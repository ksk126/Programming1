/* ���ϸ�: assignment08.c

  * ����: ��ǰ ������ ����� ������ �迭�� ���Ͽ� ������(%)�� �Է¹޾� ���ε� ������ ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�,
  ��ǰ ������ ����� �迭�� ũ��� 5�̰�, ��ǰ ������ �Է¹޾Ƽ� ����Ѵ�.

  * �ۼ���: �����

  * ��¥: 2025.05.29.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0708();
void fillB(int a[], int b[], double sale);
void printAB(int a[], int b[]);

int main()
{
	assignment0708();

	return 0;
}

void assignment0708()
{
	static int a[5] = { 0 };
	static int b[5] = { 0 };
	double sale = 0;

	printf("��ǰ�� 5���� �Է��ϼ���:\n");
	scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);

	printf("������(%)? ");
	scanf("%lf", &sale);

	fillB(a, b, (sale / 100));

	printAB(a, b);

	return;
}

void fillB(int a[], int b[], double sale)
{
	for (int i = 0; i < 5; i++)
	{
		b[i] = a[i] * (1 - sale);
	}

	return;
}

void printAB(int a[], int b[])
{
	for (int i = 0; i < 5; i++)
	{
		printf("����:		%d --> ���ΰ�:		%d\n", a[i], b[i]);
	}

	return;
}