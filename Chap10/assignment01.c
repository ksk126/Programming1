/* ���ϸ�: assignment01.c

  * ����: LOGIN ����ü ������ ������ ���� ���̵�� �н����带 �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
  �н����带 ����� ���� �н������� ������ ������ �ʵ��� �н����� ���� ����ŭ *�� ��� ����Ͻÿ�.

  * �ۼ���: �����

  * ��¥: 2025.06.05.

  * ����: v1.0

  */


#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include "LOGIN.h"

void assignment1001();
void print(LOGIN user);

int main()
{
	assignment1001();
	
	return 0;
}

void assignment1001()
{
	LOGIN user;
	printf("ID? ");
	scanf("%s", user.id);
	printf("Password? ");
	scanf("%s", user.pw);

	print(user);

	return;
}

void print(LOGIN user)
{
	printf("ID: %s\n", user.id);
	printf("PW: ");
	for (int i = 0; i < strlen(user.pw); i++)
	{
		printf("*");
	}
	return;
}