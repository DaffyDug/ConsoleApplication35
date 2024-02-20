#pragma once
#include <iostream>
using namespace std;
class Brick
{
	int _kg;
	float _price;
public:
	Brick(int kg)
	{
		_kg = 4;
		_price = 20;
	}
	Brick()
	{

	}
	void Cost_House(float m)
	{
		_price *= m;
		cout << _price << endl;
	}
	void KG_House(int m)
	{
		_kg *= m;
		cout << _kg << endl;
	}
};

