/* 파일명: assignment04.c

  * 내용: 특정 값으로 초기화된 정수형 배열에 대하여 배열의 원소 중 
  최댓값을 가진 원소와 최솟값을 가진 원소를 찾아서 인덱스와 값을 함께 출력하는 프로그램을 작성하시오.

  * 작성자: 김수경

  * 날짜: 2025.05.29.

  * 버전: v1.0

  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void assignment0704();
void fillA();
void printA(int a[], int max);
int findMax(int a[]);

int a[10] = { 0 };

int main()
{
	srand((unsigned)time(NULL));

	assignment0704();

	return 0;
}

void assignment0704()
{
	fillA();

	int indexMax = findMax(a);

	printA(a, indexMax);

	return;
}

void fillA()
{
	for (int i = 0; i < 10; i++)

	{
		a[i] = rand() % 100;

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

void printA(int a[], int max)
{
	printf("¹?¿­: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\n??´?°ª: ????½º=%d, °ª=%d", max, a[max]);

	return;
}

int findMax(int a[])
{
	int max = a[0], indexMax = 0;

	for (int i = 1; i < 10; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			indexMax = i;
		}
	}

	return indexMax;
}