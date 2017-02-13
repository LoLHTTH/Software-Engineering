#pragma once

#include "Ship.h"
#include "Square.h"

class Grid
{
public:
	Grid();
	bool placeShip(int x, int y, Ship currentShip);
	bool checkHit(int x, int y);
	bool checkAiHit(int x, int y);
	void setGridSize(int width,int height);
private:
	int m_width;
	int m_height;
	Square pSquares[64];
	Square aSquares[64];
};