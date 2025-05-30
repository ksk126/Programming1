/* 파일명: assignment19.c

* 내용 : 0~999사이의 임의의 정수 3개를 생성하고 divisors 함수를 이용해서 각각의 약수를 출력하는 프로그램을 작성하시오.

* 작성자 : 김수경

* 날짜 : 2025.05.23.

* 버전 : v1.0

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void assignment0618();
void divisors(int r);

int main()
{
	srand(time(NULL));
	assignment0618();
	return 0;
}

void assignment0618()
{
	int random1 = 0, random2 = 0, random3 = 0;
	random1 = rand() % 1000;
	divisors(random1);
	random2 = rand() % 1000;
	divisors(random2);
	random3 = rand() % 1000;
	divisors(random3);

	return;
}

void divisors(int r)
{
	printf("%d의 약수: ", r);
	for (int i = 1; i <= r; i++)
	{
		if (r % i == 0)
		{
			printf("%d ", i);

		}
	}
	printf("\n");
}