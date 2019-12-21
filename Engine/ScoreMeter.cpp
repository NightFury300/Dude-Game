#include"ScoreMeter.h"
#include"Graphics.h"

ScoreMeter::ScoreMeter(int in_x, int in_y)
{
	x = in_x;
	y = in_y;
}

void ScoreMeter::IncreaseScore()
{
	score++;
}

void ScoreMeter::Draw(Graphics & gfx)
{
	for (int i = 0; i < increaseScore * score; i++)
	{
		for (int j = 0; j <= Width; j++)
		{
			gfx.PutPixel(x + i, y + j, c);
		}
	}
}
