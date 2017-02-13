#pragma once
class Square
{
public:
	Square();
	bool checkActive();
	bool isShipOn();
	void setActiveFalse();
	int getX();
	int getY();
private:
	int x;
	int y;
	bool shipOn;
	bool active;
};