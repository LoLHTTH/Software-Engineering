#pragma once

class ShipType
{
public:
	ShipType();
	int checkHealth();
private:
	int m_size;
	int m_health;
};