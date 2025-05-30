/* ���ϸ�: assignment13.c

  * ����: ����ǥ ���� ���α׷��� �ۼ��Ϸ��� �Ѵ�. ������ ������ ���� �¼��� ��� 10����� ����.
  ������ �¼����� �Է¹޾� �� �ڸ��� �Ҵ��Ѵ�. ������ ������ �� �¼��� ���¸� ����Ѵ�. O�̸� ���� ����, X�� ���� �Ұ��� �ǹ��Ѵ�.
  �� �̻� ������ �� ������ ���α׷��� �����Ѵ�.

  * �ۼ���: �����

  * ��¥: 2025.05.29.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0712();
void printArr(char a[]);
void computeSit(char a[]);

int main()
{
	assignment0712();

	return 0;
}

void assignment0712()
{
	static char a[10] = { 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O' };

	printArr(a);

	while (a[9] != 'X')
	{
		computeSit(a);

		printArr(a);
	}

	return;
}

void printArr(char a[])
{
	printf("���� �¼�: [");
	for (int i = 0; i < 10; i++)
	{
		printf(" %c", a[i]);
	}
	printf(" ]\n");

	return;
}

void computeSit(char a[])
{
	int sit = 0, count = 0;
	printf("������ �¼���? ");
	scanf("%d", &sit);

	for (int i = 0; i < 10 && count < sit; i++)
	{
		if (a[i] == 'O')
		{
			a[i] = 'X';
			printf("%d ", i + 1);
			count++;
		}
	}
	printf("�� �¼��� �����߽��ϴ�.\n");

	return;
}