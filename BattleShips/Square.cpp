#include "Square.h"

Square::Square()
{
	active = true;
}

bool Square::checkActive()
{
	return true;
}

bool Square::isShipOn()
{
	return true;
}
int Square::getX()
{
	return x;
}
int Square::getY()
{
	return y;
}
void Square::setActiveFalse()
{
	active = false;
}