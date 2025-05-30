/* 파일명: assignment-16.c
* 내용: PA16. 0~255 사이의 값을 red, green, blue의 순서로 3개 입력받아서 RGB 색상을 만들어서 출력하는 프로그램을 작성하시오.
RGB 색상을 출력할 때는 바이트 단위로 값을 알아보기 쉽도록 16진수로 출력한다.
* 작성자: 김수경
* 날짜: 2025.4.9
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0416();
int printColor(int r, int g, int b);

int main()
{
	assignment0416();
	return 0;
}

void assignment0416()
{
	int r = 0, g = 0, b = 0;
	printf("red? ");
	scanf("%d", &r);
	printf("green? ");
	scanf("%d", &g);
	printf("blue? ");
	scanf("%d", &b);

	int rgb = printColor(r, g, b);

	printf("RGB 트루컬러: %06X\n", rgb);
	return;
}

int printColor(int r, int g, int b)
{
	if (r < 0 || r > 255) r = 0X0000;
	if (g < 0 || g > 255) g = 0X0000;
	if (b < 0 || b > 255) b = 0X0000;

	int rgb = r | g << 8 | b << 16;

	return rgb;
}