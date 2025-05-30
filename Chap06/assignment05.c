/* 파일명: assignment05.c

  * 내용: 0이 입력될 때까지 입력된 정수들에 대해서 짝수의 개수와 홀수의 개수를 구해서 출력하는 프로그램을 작성하시오.

  * 작성자: 김수경

  * 날짜: 2025.05.23.

  * 버전: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0605();
void is_even();
void is_odd();

int even = 0, odd = 0;

int main()
{
	assignment0605();

	return 0;
}

void assignment0605()
{
	int val = 0;
	printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)\n");

	do
	{
		scanf("%d", &val);

		if (val != 0)
		{
			if (val % 2 == 0)
			{
				is_even();
			}
			else
			{
				is_odd();
			}
		}
		else
		{
			break;
		}
	} while (1);

	printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.", even, odd);

	return;
}

void is_even()
{
	even++;

	return 0;
}

void is_odd()
{
	odd++;

	return 0;
}