#pragma once
#include "Graphics.h"
#include "Dude.h"

class Goal
{
public:
	void Draw(Graphics& gfx) const;
	bool IsEaten() const;
	void Glow();
	void Update(int new_x,int new_y);
	void ProcessConsumption(const Dude& dude);
private:
	int x = 200;
	int y = 200;
	int r = 255;
	int g = 0;
	int b = 0;
	int c = 4;
	static constexpr int width = 20;
	static constexpr int height = 20;
	bool isEaten = true;
};