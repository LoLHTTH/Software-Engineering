#include "Grid.h"

Grid::Grid()
{

}

bool Grid::placeShip(int x, int y, Ship currentShip)
{
	return false;
}

bool Grid::checkHit(int x, int y)
{
	for (int i = 0; i < 64; i++)
	{
		if ((pSquares[i].getX() == x && pSquares[i].getY() == y) 
			&& pSquares[i].isShipOn() == true)
		{
			pSquares[i].setActiveFalse();
			// called deconstructor for Ai's ship
			return true;
		}
	}
	pSquares[x, y].setActiveFalse();
	return false;
}

bool Grid::checkAiHit(int x, int y)
{
	for (int i = 0; i < 64; i++)
	{
		if ((aSquares[i].getX() == x && aSquares[i].getY() == y)
			&& aSquares[i].isShipOn() == true)
		{
			aSquares[i].setActiveFalse();
			// called deconstructor for Player's ship
			return true;
		}
	}
	aSquares[x, y].setActiveFalse();
	return false;
}

void Grid::setGridSize(int width, int height)
{
	m_width = width;
	m_height = height;
}