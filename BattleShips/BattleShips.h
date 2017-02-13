#pragma once
#include "Player.h"
#include "Grid.h"
#include "Ai.h"
#include "Highscore.h"
#include "Ship.h"
#include "ShipType.h"

class BattleShips
{
public:
	BattleShips();
	void openGame();
	void quitGame();
	void rotateShip(float angle);
	void checkWinner();
	void updateHighscore();
	void checkHighscore();
	void adjustShipCount();
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
};