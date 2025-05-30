/* 파일명: assignment01.c

  * 내용: 첫 번째 항의 값과 공차를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하시오.

  * 작성자: 김수경

  * 날짜: 2025.05.29.

  * 버전: v1.0

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

	printf("첫 번째 항? ");
	scanf("%d", &start);
	printf("공차? ");
	scanf("%d", &d);

	fillCD(a, start, d);

	printf("등차수열­: ");
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