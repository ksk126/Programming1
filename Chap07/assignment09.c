/* ���ϸ�: assignment09.c

  * ����: 1~12���� �ڵ��� ����� �迭�� �����ϰ� ȭ�鿡 ���� �׷����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
  12������ �ڵ��� ����� ����ִ� �迭�� Ư�� ������ �ʱ�ȭ�ؼ� ����ϰ�,
  �ڵ��� ��� 2000�� �� '*'�� �ϳ��� ���� �׷����� ����Ѵ�.

  * �ۼ���: �����

  * ��¥: 2025.05.29.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void assignment0709();
void fillA(int a[]);
void printA();

int main()
{
	srand((unsigned)time(NULL));

	assignment0709();

	return 0;
}

void assignment0709()
{
	static int a[12] = { 0 };

	fillA(a);

	printA(a);

	return;
}

void fillA(int a[])
{
	for (int i = 0; i < 12; i++)

	{
		a[i] = rand() + 10000;

		for (int j = 0; j < i; j++)
		{
			if (a[i] == a[j])
			{
				i--;
			}
		}
	}

	return;
}

void printA(int a[])
{
	int max = 0;

	for (int i = 0; i < 12; i++)
	{
		int max = (a[i] / 2000);

		printf("%d�� %d:", i + 1, a[i]);
		for (int j = 0; j < max; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return;
}