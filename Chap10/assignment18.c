/* 파일명: assignment18.c

  * 내용: SONG 구조체 배열이 있을 때, 전체 곡 목록을 보여주고 사용자로부터 플레이리스트에
  추가할 노래를 번호로 선택하게 한다. 플레이리스트에 노래를 추가할 때마다 플레이리스트의
  곡 목록과 전체 재생 시간이 얼마인지를 출력한다. 플레이리스트에는 최대 5곡만 등록할 수 있다.

  * 작성자: 김수경

  * 날짜: 2025.06.05.

  * 버전: v1.0

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
		{"별 보러 가자", "박보검", "ballad", 316},
		{"How Long", "Charlie Puth", "pop", 198},
		{"I'm Fine", "방탄소년단", "hip-hop", 209},
		{"봄날", "방탄소년단", "hip-hop", 274},
		{"Awake", "방탄소년단", "ballad", 226},
		{"아낙네", "MINO", "hip-hop", 241}
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
	printf("%-3s %-25s %-20s %-10s %s\n", "", "제목", "아티스트", "장르", "재생시간");
	for (int i = 0; i < sz; i++)
	{
		printf("%-3d %-25s %-20s %-10s %d초\n", i + 1, (musiclist + i)->name, (musiclist + i)->artist,
			(musiclist + i)->genre, (musiclist + i)->sec);
	}
	
	return;
}

int scanNum()
{
	int num = 0;
	printf("플레이리스트에 추가할 곡 번호? ");
	scanf("%d", &num);

	if (num < 0 || num>8)
	{
		printf("잘못된 곡 번호입니다.\n");
		num = scanNum();
	}

	return num;
}

void printPL(SONG* musiclist, int i, int num, SONG* playlist)
{
	int secResult = 0;
	playlist[i] = musiclist[num-1];
	printf("<< 플레이리스트 >>\n");
	for (int j = 0; j < 5; j++)
	{
		if (playlist[j].sec == 0)
		{
			break;
		}
		printf("%-25s %-20s %-10s %d초\n", playlist[j].name, playlist[j].artist,
			playlist[j].genre, playlist[j].sec);
		secResult += playlist[j].sec;
	}
	printf("총 재생시간 : %d초\n", secResult);

	return;
}