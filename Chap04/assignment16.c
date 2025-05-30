/* ���ϸ�: assignment-16.c
* ����: PA16. 0~255 ������ ���� red, green, blue�� ������ 3�� �Է¹޾Ƽ� RGB ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
RGB ������ ����� ���� ����Ʈ ������ ���� �˾ƺ��� ������ 16������ ����Ѵ�.
* �ۼ���: �����
* ��¥: 2025.4.9
* ����: v1.0
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

	printf("RGB Ʈ���÷�: %06X\n", rgb);
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