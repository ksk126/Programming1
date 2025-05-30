#pragma once

typedef struct point {
	int x;
	int y;
} POINT;

typedef struct rect {
	POINT right_top;
	POINT left_bottom;
} RECT;