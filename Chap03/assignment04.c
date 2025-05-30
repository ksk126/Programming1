/* 파일명: assignment-04.c
* 내용: PA04. 물체에 작용한 힘의 크기와 힘의 방향으로 이동한 거리를 입력받아 한 일의 양을 구하는 프로그램 작성하기.
힘의 크기는 N단위로, 이동한 거리는 m단위로 입력받을 것.
* 작성자: 김수경
* 날짜: 2025.4.3
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Main();
double Compute(int n, int M);

int main()
{
	Main();
	return 0;
}

void Main()
{
	double N = 0, m = 0;

	printf("힘(N)? ");
	scanf("%lf", &N);
	printf("이동거리(m)? ");
	scanf("%lf", &m);

	double J = Compute(N, m);

	printf("%.2lf J", J);
	return;
}

double Compute(int n, int M)
{
	double J = n * M;
	return J;
}