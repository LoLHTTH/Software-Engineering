#pragma once
#include "Player.h"
#include "Grid.h"
#include "Ai.h"
#include "Highscore.h"
#include "Ship.h"
#include "ShipType.h"
#include <iostream>
#include <string>

class BattleShips
{
public:
	BattleShips();
	void quitGame();
	void rotateShip(float angle);
	void checkWinner();
	void updateHighscore();
	void checkHighscore();
	void adjustShipCount(int number);
	void changeShipType();
	void changeGridSize(int width, int height);
	void saveScore();
private:
	Player player;
	Grid grid;
	Ai ai;
	Highscore highscore;
	Ship aCurrentShip;
	Ship aCurrentAiShip;
	ShipType shiptype; 
	std::string score;
	int totalShips;
};