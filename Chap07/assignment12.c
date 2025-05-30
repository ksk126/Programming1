/* 파일명: assignment13.c

  * 내용: 기차표 예매 프로그램을 작성하려고 한다. 간단한 구현을 위해 좌석은 모두 10개라고 하자.
  예매할 좌석수를 입력받아 빈 자리를 할당한다. 예매할 때마다 각 좌석의 상태를 출력한다. O이면 예매 가능, X는 에매 불가를 의미한다.
  더 이상 예매할 수 없으면 프로그램을 종료한다.

  * 작성자: 김수경

  * 날짜: 2025.05.29.

  * 버전: v1.0

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
	printf("현재 좌석: [");
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
	printf("예매할 좌석수? ");
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
	printf("번 좌석을 예매했습니다.\n");

	return;
}