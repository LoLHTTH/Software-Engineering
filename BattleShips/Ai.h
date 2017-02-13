#pragma once
#include "Ship.h"

class Ai
{
public:
	Ai();
	Ship getShip();
private:
	int m_difficulty;
	Ship aShip[5];
};