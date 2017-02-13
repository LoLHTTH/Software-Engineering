#include "Player.h"

Player::Player()
{

}

int Player::getShips()
{
	return LENGTH;
}

std::string Player::getName()
{
	return m_name;
}
int Player::getScore()
{
	return m_score;
}
Ship Player::getShip()
{
	return pShip[0];
}