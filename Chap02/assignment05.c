/*
* ���ϸ�: Assignment05
* ����: PA05. �����Ը� �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�����Դ� �Ǽ��� �Է¹�����, �Ҽ��� ���� 2�ڸ������� ����Ѵ�.
* �ۼ���: �����
* 2025.3.20
* ����: v1.0
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
	float kg;

	printf("������? ");
	scanf("%f", &kg);

	printf("�Է��� �����Դ� %.2fKG�Դϴ�.", kg);
	return;
}