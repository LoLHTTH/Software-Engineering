#pragma once

#include <string.h>
#include <iostream>

class Highscore
{
public:
	Highscore();
	void updateHighscore(std::string name, int score);
	int getHighscore();
private:
	int m_highscore;
	std::string m_name;
};