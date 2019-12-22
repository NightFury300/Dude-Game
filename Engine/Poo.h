#pragma once

#include "Graphics.h"
#include "Dude.h"
#include "Vec2.h"

class Poo
{
public:
	void Init(const Vec2& in_pos, const Vec2& in_vel);
	void Update(float dt);
	void ProcessConsumption( const Dude& dude );
	void Draw( Graphics& gfx ) const;
	bool IsEaten() const;
private:
	Vec2 pos;
	Vec2 vel;
	static constexpr int width = 24;
	static constexpr int height = 24;
	bool isEaten = false;
	bool Initialized = false;
};