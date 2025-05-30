/*
* 파일명: Assignment11
* 내용: PA11. 원주율 파이 값이 3.14159265라고 할 때, 파이 값을 여러 가지 방법으로 출력하는 프로그램을 작성하시오.
소수점 이하 2자리까지, 소수점 이하 4자리까지, 소수점 이하 6자리까지, 소수점 이하 8자리까지 각각 출력하고, 지수 표기로도 출력해본다.
* 작성자: 김수경
* 2025.3.20
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Main(void);

int main()
{
	Main();
	return 0;
}

void Main(void)
{
	double f = 3.14159265;
	printf("%.2f\n", f);
	printf("%.4f\n", f);
	printf("%.6f\n", f);
	printf("%.8lf\n", f);
	printf("%e\n", f);
	return;
}