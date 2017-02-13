#pragma once
#include "ShipType.h"

class Ship
{
public:
	Ship();
	void changeType(ShipType shiptype);
private:
	bool m_rotate;
	bool m_alive;
	ShipType m_shipType;
	int m_rotation;
};