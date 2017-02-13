#include "Highscore.h"

Highscore::Highscore()
{

}
void Highscore::updateHighscore(std::string name, int score)
{
	m_name = name;
	m_highscore = score;
}
int Highscore::getHighscore()
{
	return m_highscore;
}