/* ���ϸ�: assignment08.c

* ����: ��Ʈ ������ �����ϴ� ���⸦ ���α׷��Ͻÿ�.

* �ۼ���: �����

* ��¥: 2025.04.29.

* ����: v1.0

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0508();

int main()
{
	assignment0508();
	return 0;
}

void assignment0508()
{
	unsigned int a = 0, b = 0;
	char ch = 0;

	printf("��Ʈ ���� ����? ");
	scanf("%x %c %x", &a, &ch, &b);

	if (ch == '&')
	{
		printf("%x %c %x = %x\n", a, ch, b, a & b);
	}
	else if (ch == '|')
	{
		printf("%x %c %x = %x\n", a, ch, b, a | b);
	}
	else if (ch == ' ^ ')
	{
		printf("%x %c %x = %x\n", a, ch, b, a ^ b);
	}
}