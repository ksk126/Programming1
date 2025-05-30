/* ���ϸ�: assignment-01.c
* ����: PA01. ������ �ӷ��� �Ǽ��� �Է¹޾� � �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
������ kg ����, �ӷ��� m/s ������ �Է¹޴´�.
* �ۼ���: �����
* ��¥: 2025.4.9
* ����: v1.0
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
	�Լ���: assignment0401()
	���(å��): ����, �ӷ��� �Է¹���, ��������� ����ϵ��� �Լ� ȣ��, �� ����� �ֿܼ� ���
	�Է�: ����
	��ȯ: �����̸� 0�̸� ����, �׿� ���� �����̴�.
*/
int assignment0401(void)
{
	// 1. ����, �ӵ� �Է� �޾� ����
	double kg = 0, ms = 0;

	printf("����(kg)? ");
	scanf("%lf", &kg);
	printf("�ӷ�(m/s)? ");
	scanf("%lf", &ms);

	// 2. ������� ���
	double result = getMotionEnergy(kg, ms);

	// 3. ���� ������� ���
	printf("� ������: %.2f J\n", result);

	return 0;
}

/*
	�Լ���: getMotionEnergy()
	���(å��): ����, �ӷ��� �Է¹޾� ��������� ����Ͽ� ��ȯ
	�Է�: ����(kg), �ӷ�(m/s)
	��ȯ: �������
*/
double getMotionEnergy(double weight, double velocity)
{
	// ������ = 1/2 * ���� * �ӵ� * �ӵ�
	double result = 0.5 * weight * velocity * velocity;
	return result;
}