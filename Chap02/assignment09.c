/*
* 파일명: Assignment09
* 내용: PA09. 16진수 정수를 입력받아 10진수로 출력하는 프로그램을 작성하시오.
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
	int n;
	printf("16진수 정수? ");
	scanf("%x", &n);
	printf("16진수 %x는 10진수로 %d입니다.", n, n);
	return;
}