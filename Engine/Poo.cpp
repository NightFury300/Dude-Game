#include "Poo.h"
#include "Graphics.h"
#include <assert.h>

void Poo::Init(const Vec2& in_pos, const Vec2& in_vel)
{
	assert(Initialized == false);
	pos = in_pos;
	vel = in_vel;
	Initialized = true;
}
void Poo::Update(float dt)
{
	assert(Initialized == true);
	pos += vel * dt;

	const float right = pos.x + width;
	if( pos.x < 0 )
	{
		pos.x = 0;
		vel.x = -vel.x;
	}
	else if( right >= float(Graphics::ScreenWidth ))
	{
		pos.x = (Graphics::ScreenWidth - 1) - width;
		vel.x = -vel.x;
	}

	const float bottom = pos.y + height;
	if( pos.y < 0 )
	{
		pos.y = 0;
		vel.y = -vel.y;
	}
	else if( bottom >= float(Graphics::ScreenHeight ))
	{
		pos.y = (Graphics::ScreenHeight - 1) - height;
		vel.y = -vel.y;
	}
}

void Poo::ProcessConsumption( const Dude& dude )
{
	assert(Initialized == true);
	const float duderight = dude.GetPos().x + dude.GetWidth();
	const float dudebottom = dude.GetPos().y + dude.GetHeight();
	const float pooright = pos.x + width;
	const float poobottom = pos.y + height;

	if( duderight >= pos.x &&
		dude.GetPos().x <= pooright &&
		dudebottom >= pos.y &&
		dude.GetPos().y <= poobottom )
	{
		isEaten = true;
	}
}

void Poo::Draw( Graphics& gfx ) const
{
	const int int_x = int(pos.x);
	const int int_y = int(pos.y);

	gfx.PutPixel( 14 + int_x,0 + int_y,138,77,0 );
	gfx.PutPixel( 7 + int_x,1 + int_y,138,77,0 );
	gfx.PutPixel( 13 + int_x,1 + int_y,138,77,0 );
	gfx.PutPixel( 20 + int_x,1 + int_y,138,77,0 );
	gfx.PutPixel( 6 + int_x,2 + int_y,138,77,0 );
	gfx.PutPixel( 13 + int_x,2 + int_y,138,77,0 );
	gfx.PutPixel( 20 + int_x,2 + int_y,138,77,0 );
	gfx.PutPixel( 6 + int_x,3 + int_y,138,77,0 );
	gfx.PutPixel( 6 + int_x,4 + int_y,138,77,0 );
	gfx.PutPixel( 14 + int_x,4 + int_y,138,77,0 );
	gfx.PutPixel( 21 + int_x,4 + int_y,138,77,0 );
	gfx.PutPixel( 7 + int_x,5 + int_y,138,77,0 );
	gfx.PutPixel( 13 + int_x,5 + int_y,138,77,0 );
	gfx.PutPixel( 21 + int_x,5 + int_y,138,77,0 );
	gfx.PutPixel( 7 + int_x,6 + int_y,138,77,0 );
	gfx.PutPixel( 20 + int_x,6 + int_y,138,77,0 );
	gfx.PutPixel( 6 + int_x,7 + int_y,138,77,0 );
	gfx.PutPixel( 14 + int_x,7 + int_y,51,28,0 );
	gfx.PutPixel( 15 + int_x,7 + int_y,51,28,0 );
	gfx.PutPixel( 20 + int_x,7 + int_y,138,77,0 );
	gfx.PutPixel( 12 + int_x,8 + int_y,51,28,0 );
	gfx.PutPixel( 13 + int_x,8 + int_y,51,28,0 );
	gfx.PutPixel( 14 + int_x,8 + int_y,51,28,0 );
	gfx.PutPixel( 7 + int_x,9 + int_y,138,77,0 );
	gfx.PutPixel( 11 + int_x,9 + int_y,51,28,0 );
	gfx.PutPixel( 12 + int_x,9 + int_y,102,57,0 );
	gfx.PutPixel( 13 + int_x,9 + int_y,138,77,0 );
	gfx.PutPixel( 14 + int_x,9 + int_y,138,77,0 );
	gfx.PutPixel( 15 + int_x,9 + int_y,51,28,0 );
	gfx.PutPixel( 21 + int_x,9 + int_y,138,77,0 );
	gfx.PutPixel( 10 + int_x,10 + int_y,51,28,0 );
	gfx.PutPixel( 11 + int_x,10 + int_y,51,28,0 );
	gfx.PutPixel( 12 + int_x,10 + int_y,102,57,0 );
	gfx.PutPixel( 13 + int_x,10 + int_y,138,77,0 );
	gfx.PutPixel( 14 + int_x,10 + int_y,138,77,0 );
	gfx.PutPixel( 15 + int_x,10 + int_y,51,28,0 );
	gfx.PutPixel( 20 + int_x,10 + int_y,138,77,0 );
	gfx.PutPixel( 9 + int_x,11 + int_y,51,28,0 );
	gfx.PutPixel( 10 + int_x,11 + int_y,138,77,0 );
	gfx.PutPixel( 11 + int_x,11 + int_y,138,77,0 );
	gfx.PutPixel( 12 + int_x,11 + int_y,51,28,0 );
	gfx.PutPixel( 13 + int_x,11 + int_y,51,28,0 );
	gfx.PutPixel( 14 + int_x,11 + int_y,51,28,0 );
	gfx.PutPixel( 15 + int_x,11 + int_y,51,28,0 );
	gfx.PutPixel( 16 + int_x,11 + int_y,51,28,0 );
	gfx.PutPixel( 9 + int_x,12 + int_y,51,28,0 );
	gfx.PutPixel( 10 + int_x,12 + int_y,138,77,0 );
	gfx.PutPixel( 11 + int_x,12 + int_y,138,77,0 );
	gfx.PutPixel( 12 + int_x,12 + int_y,111,62,0 );
	gfx.PutPixel( 13 + int_x,12 + int_y,102,57,0 );
	gfx.PutPixel( 14 + int_x,12 + int_y,102,57,0 );
	gfx.PutPixel( 15 + int_x,12 + int_y,102,57,0 );
	gfx.PutPixel( 16 + int_x,12 + int_y,51,28,0 );
	gfx.PutPixel( 9 + int_x,13 + int_y,51,28,0 );
	gfx.PutPixel( 10 + int_x,13 + int_y,109,61,0 );
	gfx.PutPixel( 11 + int_x,13 + int_y,138,77,0 );
	gfx.PutPixel( 12 + int_x,13 + int_y,138,77,0 );
	gfx.PutPixel( 13 + int_x,13 + int_y,138,77,0 );
	gfx.PutPixel( 14 + int_x,13 + int_y,138,77,0 );
	gfx.PutPixel( 15 + int_x,13 + int_y,138,77,0 );
	gfx.PutPixel( 16 + int_x,13 + int_y,51,28,0 );
	gfx.PutPixel( 5 + int_x,14 + int_y,51,28,0 );
	gfx.PutPixel( 7 + int_x,14 + int_y,51,28,0 );
	gfx.PutPixel( 8 + int_x,14 + int_y,51,28,0 );
	gfx.PutPixel( 9 + int_x,14 + int_y,51,28,0 );
	gfx.PutPixel( 10 + int_x,14 + int_y,51,28,0 );
	gfx.PutPixel( 11 + int_x,14 + int_y,138,77,0 );
	gfx.PutPixel( 12 + int_x,14 + int_y,138,77,0 );
	gfx.PutPixel( 13 + int_x,14 + int_y,138,77,0 );
	gfx.PutPixel( 14 + int_x,14 + int_y,138,77,0 );
	gfx.PutPixel( 15 + int_x,14 + int_y,138,77,0 );
	gfx.PutPixel( 16 + int_x,14 + int_y,51,28,0 );
	gfx.PutPixel( 4 + int_x,15 + int_y,51,28,0 );
	gfx.PutPixel( 5 + int_x,15 + int_y,138,77,0 );
	gfx.PutPixel( 6 + int_x,15 + int_y,51,28,0 );
	gfx.PutPixel( 7 + int_x,15 + int_y,116,65,0 );
	gfx.PutPixel( 8 + int_x,15 + int_y,138,77,0 );
	gfx.PutPixel( 9 + int_x,15 + int_y,138,77,0 );
	gfx.PutPixel( 10 + int_x,15 + int_y,138,77,0 );
	gfx.PutPixel( 11 + int_x,15 + int_y,51,28,0 );
	gfx.PutPixel( 12 + int_x,15 + int_y,51,28,0 );
	gfx.PutPixel( 13 + int_x,15 + int_y,51,28,0 );
	gfx.PutPixel( 14 + int_x,15 + int_y,51,28,0 );
	gfx.PutPixel( 15 + int_x,15 + int_y,51,28,0 );
	gfx.PutPixel( 16 + int_x,15 + int_y,51,28,0 );
	gfx.PutPixel( 17 + int_x,15 + int_y,51,28,0 );
	gfx.PutPixel( 18 + int_x,15 + int_y,51,28,0 );
	gfx.PutPixel( 1 + int_x,16 + int_y,51,28,0 );
	gfx.PutPixel( 2 + int_x,16 + int_y,51,28,0 );
	gfx.PutPixel( 3 + int_x,16 + int_y,51,28,0 );
	gfx.PutPixel( 4 + int_x,16 + int_y,51,28,0 );
	gfx.PutPixel( 5 + int_x,16 + int_y,138,77,0 );
	gfx.PutPixel( 6 + int_x,16 + int_y,51,28,0 );
	gfx.PutPixel( 7 + int_x,16 + int_y,116,65,0 );
	gfx.PutPixel( 8 + int_x,16 + int_y,138,77,0 );
	gfx.PutPixel( 9 + int_x,16 + int_y,138,77,0 );
	gfx.PutPixel( 10 + int_x,16 + int_y,138,77,0 );
	gfx.PutPixel( 11 + int_x,16 + int_y,138,77,0 );
	gfx.PutPixel( 12 + int_x,16 + int_y,138,77,0 );
	gfx.PutPixel( 13 + int_x,16 + int_y,109,61,0 );
	gfx.PutPixel( 14 + int_x,16 + int_y,51,28,0 );
	gfx.PutPixel( 15 + int_x,16 + int_y,138,77,0 );
	gfx.PutPixel( 16 + int_x,16 + int_y,138,77,0 );
	gfx.PutPixel( 17 + int_x,16 + int_y,138,77,0 );
	gfx.PutPixel( 18 + int_x,16 + int_y,123,69,0 );
	gfx.PutPixel( 19 + int_x,16 + int_y,51,28,0 );
	gfx.PutPixel( 0 + int_x,17 + int_y,51,28,0 );
	gfx.PutPixel( 1 + int_x,17 + int_y,87,49,0 );
	gfx.PutPixel( 2 + int_x,17 + int_y,87,49,0 );
	gfx.PutPixel( 3 + int_x,17 + int_y,87,49,0 );
	gfx.PutPixel( 4 + int_x,17 + int_y,87,49,0 );
	gfx.PutPixel( 5 + int_x,17 + int_y,51,28,0 );
	gfx.PutPixel( 6 + int_x,17 + int_y,51,28,0 );
	gfx.PutPixel( 7 + int_x,17 + int_y,43,24,0 );
	gfx.PutPixel( 8 + int_x,17 + int_y,51,28,0 );
	gfx.PutPixel( 9 + int_x,17 + int_y,51,28,0 );
	gfx.PutPixel( 10 + int_x,17 + int_y,51,28,0 );
	gfx.PutPixel( 11 + int_x,17 + int_y,51,28,0 );
	gfx.PutPixel( 12 + int_x,17 + int_y,51,28,0 );
	gfx.PutPixel( 13 + int_x,17 + int_y,40,22,0 );
	gfx.PutPixel( 14 + int_x,17 + int_y,51,28,0 );
	gfx.PutPixel( 15 + int_x,17 + int_y,138,77,0 );
	gfx.PutPixel( 16 + int_x,17 + int_y,138,77,0 );
	gfx.PutPixel( 17 + int_x,17 + int_y,138,77,0 );
	gfx.PutPixel( 18 + int_x,17 + int_y,123,69,0 );
	gfx.PutPixel( 19 + int_x,17 + int_y,51,28,0 );
	gfx.PutPixel( 0 + int_x,18 + int_y,51,28,0 );
	gfx.PutPixel( 1 + int_x,18 + int_y,138,77,0 );
	gfx.PutPixel( 2 + int_x,18 + int_y,138,77,0 );
	gfx.PutPixel( 3 + int_x,18 + int_y,138,77,0 );
	gfx.PutPixel( 4 + int_x,18 + int_y,138,77,0 );
	gfx.PutPixel( 5 + int_x,18 + int_y,51,28,0 );
	gfx.PutPixel( 6 + int_x,18 + int_y,51,28,0 );
	gfx.PutPixel( 7 + int_x,18 + int_y,51,28,0 );
	gfx.PutPixel( 8 + int_x,18 + int_y,51,28,0 );
	gfx.PutPixel( 9 + int_x,18 + int_y,51,28,0 );
	gfx.PutPixel( 10 + int_x,18 + int_y,51,28,0 );
	gfx.PutPixel( 11 + int_x,18 + int_y,51,28,0 );
	gfx.PutPixel( 12 + int_x,18 + int_y,51,28,0 );
	gfx.PutPixel( 13 + int_x,18 + int_y,51,28,0 );
	gfx.PutPixel( 14 + int_x,18 + int_y,51,28,0 );
	gfx.PutPixel( 15 + int_x,18 + int_y,138,77,0 );
	gfx.PutPixel( 16 + int_x,18 + int_y,138,77,0 );
	gfx.PutPixel( 17 + int_x,18 + int_y,138,77,0 );
	gfx.PutPixel( 18 + int_x,18 + int_y,123,69,0 );
	gfx.PutPixel( 19 + int_x,18 + int_y,51,28,0 );
	gfx.PutPixel( 20 + int_x,18 + int_y,51,28,0 );
	gfx.PutPixel( 21 + int_x,18 + int_y,51,28,0 );
	gfx.PutPixel( 22 + int_x,18 + int_y,51,28,0 );
	gfx.PutPixel( 0 + int_x,19 + int_y,51,28,0 );
	gfx.PutPixel( 1 + int_x,19 + int_y,138,77,0 );
	gfx.PutPixel( 2 + int_x,19 + int_y,138,77,0 );
	gfx.PutPixel( 3 + int_x,19 + int_y,138,77,0 );
	gfx.PutPixel( 4 + int_x,19 + int_y,138,77,0 );
	gfx.PutPixel( 5 + int_x,19 + int_y,51,28,0 );
	gfx.PutPixel( 6 + int_x,19 + int_y,138,77,0 );
	gfx.PutPixel( 7 + int_x,19 + int_y,138,77,0 );
	gfx.PutPixel( 8 + int_x,19 + int_y,138,77,0 );
	gfx.PutPixel( 9 + int_x,19 + int_y,138,77,0 );
	gfx.PutPixel( 10 + int_x,19 + int_y,138,77,0 );
	gfx.PutPixel( 11 + int_x,19 + int_y,138,77,0 );
	gfx.PutPixel( 12 + int_x,19 + int_y,138,77,0 );
	gfx.PutPixel( 13 + int_x,19 + int_y,138,77,0 );
	gfx.PutPixel( 14 + int_x,19 + int_y,138,77,0 );
	gfx.PutPixel( 15 + int_x,19 + int_y,138,77,0 );
	gfx.PutPixel( 16 + int_x,19 + int_y,138,77,0 );
	gfx.PutPixel( 17 + int_x,19 + int_y,138,77,0 );
	gfx.PutPixel( 18 + int_x,19 + int_y,123,69,0 );
	gfx.PutPixel( 19 + int_x,19 + int_y,51,28,0 );
	gfx.PutPixel( 20 + int_x,19 + int_y,138,77,0 );
	gfx.PutPixel( 21 + int_x,19 + int_y,138,77,0 );
	gfx.PutPixel( 22 + int_x,19 + int_y,65,36,0 );
	gfx.PutPixel( 23 + int_x,19 + int_y,51,28,0 );
	gfx.PutPixel( 1 + int_x,20 + int_y,51,28,0 );
	gfx.PutPixel( 2 + int_x,20 + int_y,51,28,0 );
	gfx.PutPixel( 3 + int_x,20 + int_y,51,28,0 );
	gfx.PutPixel( 4 + int_x,20 + int_y,51,28,0 );
	gfx.PutPixel( 5 + int_x,20 + int_y,51,28,0 );
	gfx.PutPixel( 6 + int_x,20 + int_y,138,77,0 );
	gfx.PutPixel( 7 + int_x,20 + int_y,138,77,0 );
	gfx.PutPixel( 8 + int_x,20 + int_y,138,77,0 );
	gfx.PutPixel( 9 + int_x,20 + int_y,138,77,0 );
	gfx.PutPixel( 10 + int_x,20 + int_y,138,77,0 );
	gfx.PutPixel( 11 + int_x,20 + int_y,138,77,0 );
	gfx.PutPixel( 12 + int_x,20 + int_y,138,77,0 );
	gfx.PutPixel( 13 + int_x,20 + int_y,138,77,0 );
	gfx.PutPixel( 14 + int_x,20 + int_y,138,77,0 );
	gfx.PutPixel( 15 + int_x,20 + int_y,138,77,0 );
	gfx.PutPixel( 16 + int_x,20 + int_y,138,77,0 );
	gfx.PutPixel( 17 + int_x,20 + int_y,138,77,0 );
	gfx.PutPixel( 18 + int_x,20 + int_y,123,69,0 );
	gfx.PutPixel( 19 + int_x,20 + int_y,51,28,0 );
	gfx.PutPixel( 20 + int_x,20 + int_y,138,77,0 );
	gfx.PutPixel( 21 + int_x,20 + int_y,138,77,0 );
	gfx.PutPixel( 22 + int_x,20 + int_y,65,36,0 );
	gfx.PutPixel( 23 + int_x,20 + int_y,51,28,0 );
	gfx.PutPixel( 0 + int_x,21 + int_y,51,28,0 );
	gfx.PutPixel( 1 + int_x,21 + int_y,138,77,0 );
	gfx.PutPixel( 2 + int_x,21 + int_y,138,77,0 );
	gfx.PutPixel( 3 + int_x,21 + int_y,138,77,0 );
	gfx.PutPixel( 4 + int_x,21 + int_y,138,77,0 );
	gfx.PutPixel( 5 + int_x,21 + int_y,138,77,0 );
	gfx.PutPixel( 6 + int_x,21 + int_y,51,28,0 );
	gfx.PutPixel( 7 + int_x,21 + int_y,51,28,0 );
	gfx.PutPixel( 8 + int_x,21 + int_y,51,28,0 );
	gfx.PutPixel( 9 + int_x,21 + int_y,51,28,0 );
	gfx.PutPixel( 10 + int_x,21 + int_y,51,28,0 );
	gfx.PutPixel( 11 + int_x,21 + int_y,51,28,0 );
	gfx.PutPixel( 12 + int_x,21 + int_y,51,28,0 );
	gfx.PutPixel( 13 + int_x,21 + int_y,51,28,0 );
	gfx.PutPixel( 14 + int_x,21 + int_y,51,28,0 );
	gfx.PutPixel( 15 + int_x,21 + int_y,51,28,0 );
	gfx.PutPixel( 16 + int_x,21 + int_y,51,28,0 );
	gfx.PutPixel( 17 + int_x,21 + int_y,51,28,0 );
	gfx.PutPixel( 18 + int_x,21 + int_y,51,28,0 );
	gfx.PutPixel( 20 + int_x,21 + int_y,51,28,0 );
	gfx.PutPixel( 21 + int_x,21 + int_y,51,28,0 );
	gfx.PutPixel( 22 + int_x,21 + int_y,51,28,0 );
	gfx.PutPixel( 0 + int_x,22 + int_y,51,28,0 );
	gfx.PutPixel( 1 + int_x,22 + int_y,65,36,0 );
	gfx.PutPixel( 2 + int_x,22 + int_y,65,36,0 );
	gfx.PutPixel( 3 + int_x,22 + int_y,65,36,0 );
	gfx.PutPixel( 4 + int_x,22 + int_y,65,36,0 );
	gfx.PutPixel( 5 + int_x,22 + int_y,65,36,0 );
	gfx.PutPixel( 6 + int_x,22 + int_y,51,28,0 );
	gfx.PutPixel( 1 + int_x,23 + int_y,51,28,0 );
	gfx.PutPixel( 2 + int_x,23 + int_y,51,28,0 );
	gfx.PutPixel( 3 + int_x,23 + int_y,51,28,0 );
	gfx.PutPixel( 4 + int_x,23 + int_y,51,28,0 );
	gfx.PutPixel( 5 + int_x,23 + int_y,51,28,0 );
	gfx.PutPixel( 6 + int_x,23 + int_y,51,28,0 );
}

bool Poo::IsEaten() const
{
	assert(Initialized == true);
	return isEaten;
}
