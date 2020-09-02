#pragma once
#include "Soldier.h"
#include <string>
using namespace std;
class Infantry : public Soldier
{
public :
	Infantry(string _name = "Jack", int _age = 30);
	~Infantry();
	void attact();
};

