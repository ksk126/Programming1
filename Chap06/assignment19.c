/* ���ϸ�: assignment19.c

* ���� : 0~999������ ������ ���� 3���� �����ϰ� divisors �Լ��� �̿��ؼ� ������ ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

* �ۼ��� : �����

* ��¥ : 2025.05.23.

* ���� : v1.0

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
	printf("%d�� ���: ", r);
	for (int i = 1; i <= r; i++)
	{
		if (r % i == 0)
		{
			printf("%d ", i);

		}
	}
	printf("\n");
}