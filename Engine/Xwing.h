#pragma once
#include "Graphics.h"
#include "Keyboard.h"

class Xwing
{
public:
	void boundry();
	void Draw(Graphics& gfx);
	void Update(Keyboard& kbd);
	int GetX()const;
	int GetY()const;
	int GetWidth() const;
	int GetHieght()const;
private:
	int x = 400;
	int y = 300;
	static constexpr int width = 52;
	static constexpr int height = 25;

};
