#include <iostream>
#include "Rectangle.h"

using namespace std;

const double frames_per_second = 30; 
const int duration_in_seconds = 3;

int main(int argc, char * argv[]) {
	// Construct the ffmpeg command to run.
	FrameRenderer renderer;

	int num_frames = duration_in_seconds * frames_per_second;
	for (int i = 0; i < num_frames; ++i) {
		double time_in_seconds = i / frames_per_second;
		renderer.draw_frame(time_in_seconds, 0x00, 0xff, 0x00);
	}

	cout << "num_frames: " << num_frames << endl;
	cout << "Done." << endl;

	return 0;
}