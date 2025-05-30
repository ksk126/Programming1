/* 파일명: assignment-03.c
* 내용: PA03. 질량과 높이를 입력받아 위치에너지를 구하는 프로그램 작성하기.
질량은 kg단위, 높이는 m단위로 입력받을 것.
* 작성자: 김수경
* 날짜: 2025.4.3
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0303();
double calcPositionEnergy(double weight, double height);

int main()
{
    assignment0303();
    return 0;
}

void assignment0303()
{
    double m = 0, kg = 0;

    printf("질량(kg)? ");
    scanf("%lf", &kg);
    printf("높이(m)? ");
    scanf("%lf", &m);

    double energy = calcPositionEnergy(kg, m);

    printf("위치 에너지: %lf J\n", energy);
    return;
}

double calcPositionEnergy(double weight, double height)
{
    double energy = weight * height * 9.8;
    return energy;
}