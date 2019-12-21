#pragma once

#include "Graphics.h"
#include "Dude.h"

class Poo
{
public:
	void Init(float in_x, float in_y, float in_vx, float in_vy);
	void Update(float dt);
	void ProcessConsumption( const Dude& dude );
	void Draw( Graphics& gfx ) const;
	bool IsEaten() const;
private:
	float x;
	float y;
	float vx;
	float vy;
	static constexpr int width = 24;
	static constexpr int height = 24;
	bool isEaten = false;
	bool Initialized = false;
};