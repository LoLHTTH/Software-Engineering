#pragma once
class Square
{
public:
	Square();
	bool checkActive();
private:
	int x;
	int y;
	bool shipOn;
	bool active;
};