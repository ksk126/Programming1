/* ���ϸ�: assignment-09.c
* ����: PA09. �������� ����ð��� �� ������ �Է¹޾� �� �ð� �� �� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ���: �����
* ��¥: 2025.4.9
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0409();
int computeTime(int x);

int main()
{
	assignment0409();
	return 0;
}

void assignment0409()
{
	int second = 0;

	printf("����ð�(��)? ");
	scanf("%d", &second);

	computeTime(second);

	return;
}

int computeTime(int x)
{
	int h = (x / 60) / 60;
	int m = (x / 60) % 60;
	int s = x % 60;

	h ? printf("����ð��� %d�ð� ", h) : 0;
	m ? printf("%d�� ", m) : 0;
	s ? printf("%d��", s) : (h == 0 && m == 0 ? printf("0��") : 0);
	printf("�Դϴ�.");

	return 0;

}