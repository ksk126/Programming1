/* 파일명: assignment01.c

  * 내용: LOGIN 구조체 변수를 선언한 다음 아이디와 패스워드를 입력받아 저장하고 출력하는 프로그램을 작성하시오.
  패스워드를 출력할 때는 패스워드의 내용은 보이지 않도록 패스워드 글자 수만큼 *을 대신 출력하시오.

  * 작성자: 김수경

  * 날짜: 2025.06.05.

  * 버전: v1.0

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