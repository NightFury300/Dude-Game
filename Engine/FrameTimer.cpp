#include "FrameTimer.h"

using namespace std::chrono;

FrameTimer::FrameTimer()
{
	last = steady_clock::now();
}

float FrameTimer::Mark()
{
	const steady_clock::time_point old = last;
	last = steady_clock::now();
	const duration<float> frametime = last - old;
	return frametime.count();
}
