#pragma once
#include "Rectangle.h"
#include <stdio.h>

#define W 720
#define H 480

typedef unsigned char byte;

class FrameRenderer {
public:
	FrameRenderer();
	~FrameRenderer();
	void draw_rect(int x, int y, int w, int h, byte r, byte g, byte b);
	void clear_frame();
	void clamp(int * x, int * y);
	void draw_frame(double t, byte r, byte g, byte b);
	bool outside_frame(int * x, int * y);
private:
	FILE *pipe;
	unsigned char frame[H][W][3];
};