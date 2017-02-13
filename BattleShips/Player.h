#pragma once
#include <string.h>
#include <iostream>

class Player
{
public:
	Player();
	void shoot(int x,int y);
private:
	std::string m_name;
	int m_score;
};