#pragma once
#include"Graphics.h"
#include "Colors.h"

class ScoreMeter
{
public:
	ScoreMeter(int in_x, int in_y);
	void IncreaseScore();
	void Draw(Graphics& gfx);
private:
	int x;
	int y;
	int score = 0;
	static constexpr int Width = 12;
	static constexpr int increaseScore = 4;
	static constexpr Color c = Colors::Blue;
};