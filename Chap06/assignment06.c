/* 파일명: assignment06.c

* 내용 : choose_menu의 리턴값에 따라 어떤 메뉴가 선택되었는지 간단히 출력하는 프로그램을 작성하시오.

* 작성자 : 김수경

* 날짜 : 2025.05.23.

* 버전 : v1.0

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
		printf("[1.파일 열기 2.파일 저장 3.인쇄 0.종료] 선택? ");
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
		printf("파일 열기를 수행합니다.\n");
		break;
	case 2:
		printf("파일 저장을 수행합니다.\n");
		break;
	case 3:
		printf("인쇄를 수행합니다.\n");
		break;
	}
}