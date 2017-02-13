#pragma once
#include "ShipType.h"

class Ship
{
public:
	Ship();
	void changeType(ShipType shiptype);
	void setRotation(float angle);
	int getX();
	int getY();
	
private:
	int x;
	int y;
	bool m_rotate;
	bool m_alive;
	ShipType m_shipType;
	int m_rotation;
};