#include "Goal.h"
#include "Graphics.h"

void Goal::Draw(Graphics & gfx) const
{
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
		{
			gfx.PutPixel((int)pos.x+i, (int)pos.y+j, r, g, b);
		}
	}
}

bool Goal::IsEaten() const
{
	return isEaten;
}

void Goal::Glow()
{
	g += c;
	b += c;
	if (g == 252 && b == 252)
	{
		c = -4;
	}
	if (g == 0 && b == 0)
	{
		c = 4;
	}
}

void Goal::Update(const Vec2& new_pos)
{
	pos = new_pos;
	isEaten = false;
}

void Goal::ProcessConsumption(const Dude& dude)
{
	const float duderight = dude.GetPos().x + dude.GetWidth();
	const float dudebottom = dude.GetPos().y + dude.GetHeight();
	const float goalright = pos.x + width;
	const float goalbottom = pos. y + height;

	if (dude.GetPos().x <= goalright &&
		duderight >= pos.x &&
		dude.GetPos().y <= goalbottom &&
		dudebottom >= pos.y)
	{
		isEaten = true;
	}
}
