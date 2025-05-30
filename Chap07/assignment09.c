/* 파일명: assignment09.c

  * 내용: 1~12월의 핸드폰 요금을 배열에 저장하고 화면에 막대 그래프로 출력하는 프로그램을 작성하시오.
  12개월의 핸드폰 요금이 들어있는 배열을 특정 값으로 초기화해서 사용하고,
  핸드폰 요금 2000원 당 '*'를 하나씩 막대 그래프로 출력한다.

  * 작성자: 김수경

  * 날짜: 2025.05.29.

  * 버전: v1.0

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

		printf("%d월 %d:", i + 1, a[i]);
		for (int j = 0; j < max; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return;
}