#include "Ship.h"

Ship::Ship()
{

}
void Ship::changeType(ShipType shipType)
{
	m_shipType = shipType;
}
void Ship::setRotation(float angle)
{
	m_rotation = angle;
}
int Ship::getX()
{
	return x;
}

int Ship::getY()
{
	return y;
}