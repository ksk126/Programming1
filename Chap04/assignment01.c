/* 파일명: assignment-01.c
* 내용: PA01. 질량과 속력을 실수로 입력받아 운동 에너지를 구하는 프로그램을 작성하시오.
질량은 kg 단위, 속력은 m/s 단위로 입력받는다.
* 작성자: 김수경
* 날짜: 2025.4.9
* 버전: v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0401();
double getMotionEnergy(double weight, double velocity);

int main(void)
{
	assignment0401();
	return 0;
}

/*
	함수명: assignment0401()
	기능(책임): 질량, 속력을 입력받음, 운동에너지를 계산하도록 함수 호출, 그 결과를 콘솔에 출력
	입력: 없음
	반환: 정수이며 0이면 성공, 그외 값은 에러이다.
*/
int assignment0401(void)
{
	// 1. 질량, 속도 입력 받아 저장
	double kg = 0, ms = 0;

	printf("질량(kg)? ");
	scanf("%lf", &kg);
	printf("속력(m/s)? ");
	scanf("%lf", &ms);

	// 2. 운동에너지 계산
	double result = getMotionEnergy(kg, ms);

	// 3. 계산된 운동에너지 출력
	printf("운동 에너지: %.2f J\n", result);

	return 0;
}

/*
	함수명: getMotionEnergy()
	기능(책임): 질량, 속력을 입력받아 운동에너지를 계산하여 반환
	입력: 질량(kg), 속력(m/s)
	반환: 운동에너지
*/
double getMotionEnergy(double weight, double velocity)
{
	// 에너지 = 1/2 * 질량 * 속도 * 속도
	double result = 0.5 * weight * velocity * velocity;
	return result;
}