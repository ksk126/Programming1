/* ���ϸ�: assignment01.c

  * ����: ù ��° ���� ���� ������ �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

  * �ۼ���: �����

  * ��¥: 2025.05.29.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0701();
void fillCD(int a[], int start, int d);

int main()
{
	assignment0701();

	return 0;
}

void assignment0701()
{
	int a[10];
	int start = 0, d = 0;

	printf("ù ��° ��? ");
	scanf("%d", &start);
	printf("����? ");
	scanf("%d", &d);

	fillCD(a, start, d);

	printf("����������: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}

	return;
}

void fillCD(int a[], int start, int d)
{
	a[0] = start;

	for (int i = 1; i < 10; i++)
	{
		a[i] = a[i - 1] + d;
	}

	return a;
}