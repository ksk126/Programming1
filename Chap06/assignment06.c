/* ���ϸ�: assignment06.c

* ���� : choose_menu�� ���ϰ��� ���� � �޴��� ���õǾ����� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

* �ۼ��� : �����

* ��¥ : 2025.05.23.

* ���� : v1.0

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0606();
void choose_menu(int n);

int main()
{
	assignment0606();

	return;
}

void assignment0606()
{
	int select = 1;
	while (select != 0)
	{
		printf("[1.���� ���� 2.���� ���� 3.�μ� 0.����] ����? ");
		scanf("%d", &select);

		choose_menu(select);
	}
	return;
}

void choose_menu(int n)
{
	switch (n)
	{
	case 1:
		printf("���� ���⸦ �����մϴ�.\n");
		break;
	case 2:
		printf("���� ������ �����մϴ�.\n");
		break;
	case 3:
		printf("�μ⸦ �����մϴ�.\n");
		break;
	}
}