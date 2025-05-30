/* 파일명: assignment08.c

  * 내용: 상품 가격이 저장된 정수형 배열에 대하여 할인율(%)을 입력받아 할인된 가격을 계산해서 출력하는 프로그램을 작성하시오,
  상품 가격이 저장된 배열의 크기는 5이고, 상품 가격은 입력받아서 사용한다.

  * 작성자: 김수경

  * 날짜: 2025.05.29.

  * 버전: v1.0

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

	printf("상품가 5개를 입력하세요:\n");
	scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);

	printf("할인율(%)? ");
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
		printf("가격:		%d --> 할인가:		%d\n", a[i], b[i]);
	}

	return;
}