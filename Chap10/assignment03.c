/* 파일명: assignment03.c

  * 내용: LOGIN 구조체 배열을 이용해서 로그인 과정을 프로그램으로 작성하시오.
  아이디를 입력받아 LOGIN 구조체 배열에서 아이디를 찾은 다음 입력받은 패스워드와
  등록된 패스워드를 비교해서 같으면 "로그인 성공"이라고 출력한다. LOGIN 구조체 배열은 크기가
  5인 배열로 선언하고 적당한 값으로 초기화해서 사용한다.

  * 작성자: 김수경

  * 날짜: 2025.06.05.

  * 버전: v1.0

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
			printf("로그인 성공");
		}
		else
		{
			printf("로그인 실패");
		}
	}
	return;
}

int cheak(LOGIN *users, char *id, char *pw)
{
	for (int i = 0; i < 5; i++)
	{
		if (strcmp((users+i)->id, id)) //users[i].id랑 같음
		{
			if (strcmp((users+i)->pw, pw))
			{
				return 0;
			}
		}
	}
	return 1;
}