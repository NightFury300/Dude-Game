#include "Goal.h"
#include "Graphics.h"

void Goal::Draw(Graphics & gfx) const
{
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
		{
			gfx.PutPixel(x+i, y+j, r, g, b);
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

void Goal::Update(int new_x , int new_y)
{
		x = new_x;
		y = new_y;
		isEaten = false;
}

void Goal::ProcessConsumption(const Dude& dude)
{
	const float duderight = dude.GetX() + dude.GetWidth();
	const float dudebottom = dude.GetY() + dude.GetHeight();
	const int goalright = x + width;
	const int goalbottom = y + height;

	if (dude.GetX() <= goalright &&
		duderight >= x &&
		dude.GetY() <= goalbottom &&
		dudebottom >= y)
	{
		isEaten = true;
	}
}
