/* ���ϸ�: assignment03.c

  * ����: LOGIN ����ü �迭�� �̿��ؼ� �α��� ������ ���α׷����� �ۼ��Ͻÿ�.
  ���̵� �Է¹޾� LOGIN ����ü �迭���� ���̵� ã�� ���� �Է¹��� �н������
  ��ϵ� �н����带 ���ؼ� ������ "�α��� ����"�̶�� ����Ѵ�. LOGIN ����ü �迭�� ũ�Ⱑ
  5�� �迭�� �����ϰ� ������ ������ �ʱ�ȭ�ؼ� ����Ѵ�.

  * �ۼ���: �����

  * ��¥: 2025.06.05.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include "LOGIN.h"

void assignment1003();
int cheak(LOGIN *users, char *id, char *pw);

int main()
{
	assignment1003();

	return 0;
}

void assignment1003()
{
	LOGIN users[5] = {
		{ "guest", "idontknow" },
		{ "guest1", "pw" },
		{ "id", "pw" },
		{ "id1", "pw" },
		{ "id2", "pw" }
	};

	char id[21], pw[21];
	
	while (1)
	{
		printf("ID? ");
		scanf("%s", id);
		printf("PW? ");
		scanf("%s", pw);

		if (!strcmp(id, "."))
		{
			break;
		}

		if (!cheak(users, id, pw))
		{
			printf("�α��� ����");
		}
		else
		{
			printf("�α��� ����");
		}
	}
	return;
}

int cheak(LOGIN *users, char *id, char *pw)
{
	for (int i = 0; i < 5; i++)
	{
		if (strcmp((users+i)->id, id)) //users[i].id�� ����
		{
			if (strcmp((users+i)->pw, pw))
			{
				return 0;
			}
		}
	}
	return 1;
}