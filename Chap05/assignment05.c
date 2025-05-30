/* 파일명: assignment05.c

* 내용: 온도를 입력받아 섭씨 온도는 화씨 온도로, 화씨 온도는 섭씨 온도로 변환하는 프로그램을 작성하시오.

* 작성자: 김수경

* 날짜: 2025.04.29.

* 버전: v1.0

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0505();
double computeC(int temp);
double computeF(int temp);

int main()
{
	assignment0505();
	return 0; // 'main' 함수에 반환값 추가
}

void assignment0505()
{
	double temp = 0;
	char type = 0;
	char type1 = 0;
	double result = 0.0;
	printf("온도? ");
	scanf("%lf %c", &temp, &type);

	if (type == 'C')
	{
		type1 = 'F';
		result = computeF(temp);
	}
	else if (type == 'F')
	{
		type1 = 'C';
		result = computeC(temp);
	}

	printf("%.2lf %c ==> %.2lf %c", temp, type, result, type1);
	return;
}

double computeF(int temp)
{
	return (temp * 9.0 / 5.0) + 32;
}


double computeC(int temp)
{
	return (temp - 32) * 5.0 / 9.0;
}