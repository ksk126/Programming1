/*
* 파일명: Assignment02
* 내용: PA02. 학생의 번호와 학점을 입력받아 출력하는 프로그램을 작성하시오.
학생의 번호는 정수로, 학점은 실수로 입력받는다.
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
	int num;
	float grade;

	printf("번호? ");
	scanf("%d", &num);
	printf("학점? ");
	scanf("%f", &grade);
	printf("%d번 학생의 학점은 %.6f입니다.", num, grade);
	return;
}