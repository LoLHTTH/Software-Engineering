#pragma once
#include <string.h>
#include <iostream>
#include "Ship.h"
#include "Ai.h"

class Player
{
public:
	Player();
	int getShips();
	std::string getName();
	int getScore();
	Ship getShip();
private:
	std::string m_name;
	int m_score;
	static const int LENGTH = 5;
	Ship pShip[LENGTH];
};