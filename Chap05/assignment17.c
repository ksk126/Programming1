/* ���ϸ�: assignment17.c

* ����: ���� �ð��� ������ �Է¹޾Ƽ� ���� ����� ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

* �ۼ���: �����

* ��¥: 2025.04.29.

* ����: v1.0

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0517();
int computeFee(int time);

int main()
{
	assignment0517();
	return 0;
}

void assignment0517()
{
	int time = 0;

	printf("���� �ð�(��)? ");
	scanf("%d", &time);

	int result = computeFee(time);

	printf("%d", result);
	return;
}

int computeFee(int time)
{
	int fee = 0;

	if (time >= 30)
	{
		fee = 2000;
		time -= 30;
	}

	if (time > 0)
	{
		fee += (time / 10) * 1000;
		time -= (time / 10) * 10;
	}
	if (time > 0)
	{
		fee += 1000;
	}
	return 0;
}