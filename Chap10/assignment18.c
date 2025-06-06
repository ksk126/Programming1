/* ���ϸ�: assignment18.c

  * ����: SONG ����ü �迭�� ���� ��, ��ü �� ����� �����ְ� ����ڷκ��� �÷��̸���Ʈ��
  �߰��� �뷡�� ��ȣ�� �����ϰ� �Ѵ�. �÷��̸���Ʈ�� �뷡�� �߰��� ������ �÷��̸���Ʈ��
  �� ��ϰ� ��ü ��� �ð��� �������� ����Ѵ�. �÷��̸���Ʈ���� �ִ� 5� ����� �� �ִ�.

  * �ۼ���: �����

  * ��¥: 2025.06.05.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "SONG.h"

void assignment1018();
void printMusic(SONG *musiclist, int sz);
int scanNum();
void printPL(SONG* musiclist, int i, int num, SONG* playlist);

int main()
{
	assignment1018();

	return 0;
}

void assignment1018()
{
	SONG musiclist[8] = {
		{"thank u, next", "Ariana Grande", "pop", 208},
		{"Attention", "Charlie Puth", "pop", 211},
		{"�� ���� ����", "�ں���", "ballad", 316},
		{"How Long", "Charlie Puth", "pop", 198},
		{"I'm Fine", "��ź�ҳ��", "hip-hop", 209},
		{"����", "��ź�ҳ��", "hip-hop", 274},
		{"Awake", "��ź�ҳ��", "ballad", 226},
		{"�Ƴ���", "MINO", "hip-hop", 241}
	};

	SONG playlist[5] = { "\0" };

	int sz = sizeof(musiclist) / sizeof(musiclist[0]), num;

	printMusic(musiclist, sz);

	for (int i = 0; i < 5; i++)
	{
		num = scanNum();

		if (num == 0)
		{
			break;
		}

		printPL(musiclist, i, num, playlist);
	}

	return;
}

void printMusic(SONG *musiclist, int sz)
{
	printf("%-3s %-25s %-20s %-10s %s\n", "", "����", "��Ƽ��Ʈ", "�帣", "����ð�");
	for (int i = 0; i < sz; i++)
	{
		printf("%-3d %-25s %-20s %-10s %d��\n", i + 1, (musiclist + i)->name, (musiclist + i)->artist,
			(musiclist + i)->genre, (musiclist + i)->sec);
	}
	
	return;
}

int scanNum()
{
	int num = 0;
	printf("�÷��̸���Ʈ�� �߰��� �� ��ȣ? ");
	scanf("%d", &num);

	if (num < 0 || num>8)
	{
		printf("�߸��� �� ��ȣ�Դϴ�.\n");
		num = scanNum();
	}

	return num;
}

void printPL(SONG* musiclist, int i, int num, SONG* playlist)
{
	int secResult = 0;
	playlist[i] = musiclist[num-1];
	printf("<< �÷��̸���Ʈ >>\n");
	for (int j = 0; j < 5; j++)
	{
		if (playlist[j].sec == 0)
		{
			break;
		}
		printf("%-25s %-20s %-10s %d��\n", playlist[j].name, playlist[j].artist,
			playlist[j].genre, playlist[j].sec);
		secResult += playlist[j].sec;
	}
	printf("�� ����ð� : %d��\n", secResult);

	return;
}