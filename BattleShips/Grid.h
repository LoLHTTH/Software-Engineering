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
private:
	int maxRow;
	int maxCol;
};