/* ���ϸ�: assignment-15.c
* ����: PA15. ȯ����������� 1.75%�� ������ �ִٰ� �����ϰ� ��-�޷� �Ÿű������� ȯ�������(%)�� �Է¹޾� �޷��� �� �� ����Ǵ� ȯ���� �����ϰ�,
�����ϰ��� �ϴ� �޷��� ������ �Է¹޾Ƽ� �� ���� �ش��ϴ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ���: �����
* ��¥: 2025.4.9
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define charge 1.75

void assignment0415();
double computeExchangerate(double trading, double exchange);

int main()
{
	assignment0415();
	return 0;
}

void assignment0415()
{
	double tradingrate = 0, Pexchangerate = 0, dollar = 0;

	printf("��/�޷� �Ÿű�����? ");
	scanf("%lf", &tradingrate);
	printf("ȯ�������(0~100%)? ");
	scanf("%lf", &Pexchangerate);

	double exchangerate = computeExchangerate(tradingrate, Pexchangerate);

	printf("�޷� �� �� ȯ���� %f�Դϴ�.\n", exchangerate);

	printf("������ �޷�(USD)? ");
	scanf("%lf", &dollar);

	printf("USD %.2lf �� �� ==> KRW %.2lf", dollar, dollar * exchangerate);

	return;

}

double computeExchangerate(double trading, double exchange)
{
	double exchangerate = trading + ((trading / 100) * charge * (1 - exchange / 100));

	return exchangerate;
}