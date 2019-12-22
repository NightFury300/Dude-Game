#pragma once
#include "Graphics.h"
#include "Dude.h"
#include "Vec2.h"

class Goal
{
public:
	void Draw(Graphics& gfx) const;
	bool IsEaten() const;
	void Glow();
	void Update(const Vec2& new_pos);
	void ProcessConsumption(const Dude& dude);
private:
	Vec2 pos = Vec2(200.0f, 200.0f);
	int r = 255;
	int g = 0;
	int b = 0;
	int c = 4;
	static constexpr int width = 20;
	static constexpr int height = 20;
	bool isEaten = true;
};