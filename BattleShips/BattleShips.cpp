#include "BattleShips.h"

BattleShips::BattleShips()
{

}
void BattleShips::quitGame()
{
	// close the window
}
void BattleShips::rotateShip(float angle)
{
	aCurrentShip.setRotation(angle);
}
void BattleShips::checkWinner()
{
	if (player.getShips() != 0)
	{
		std::cout << "Player has won" << std::endl;
	}
	else
	{
		std::cout << "Ai has won" << std::endl;
	}
}
void BattleShips::updateHighscore()
{
	highscore.updateHighscore(player.getName(), player.getScore());
}
void BattleShips::checkHighscore()
{
	std::cout << highscore.getHighscore() << std::endl;
}
void BattleShips::adjustShipCount(int number)
{
	totalShips = number;
}
void BattleShips::changeShipType()
{
	
}
void BattleShips::changeGridSize(int width, int height)
{
	grid.setGridSize(width,height);
}
void BattleShips::saveScore()
{
	score = std::to_string(player.getScore()); // store in a string
}