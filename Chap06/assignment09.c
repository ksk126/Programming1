/* ���ϸ�: assignment09.c

* ���� : get_red, get_green, get_blue �Լ��� �Բ� �̿��ؼ� �Է¹��� RGB ������ ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

* �ۼ��� : �����

* ��¥ : 2025.05.23.

* ���� : v1.0

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0609();
void make_rgb(int rgb);
int get_red(int rgb);
int get_green(int rgb);
int get_blue(int rgb);

int rgb = 0;

int main()
{
    assignment0609();
    return 0;
}

void assignment0609()
{
    printf("RGB ����? ");
    scanf("%x", &rgb);

    make_rgb(rgb);
}

void make_rgb(int rgb)
{
    int r = get_red(rgb);
    int g = get_green(rgb);
    int b = get_blue(rgb);

    printf("RGB %X�� ����: %06X\n", rgb, r + g + b);
}

int get_red(int rgb)
{
    int r = rgb >> 16;
    r = ~r;
    r = r << 16;
    r = r & 0x00FF0000;
    return r;
}

int get_green(int rgb)
{
    int g = g & 0x0000FF00;
    g = ~rgb;
    g = g & 0x0000FF00;
    return g;
}

int get_blue(int rgb)
{
    int b = b & 0x000000FF;
    b = ~rgb;
    b = b & 0x000000FF;
    return b;
}