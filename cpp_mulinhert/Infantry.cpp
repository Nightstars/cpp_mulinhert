#include "Infantry.h"
#include <iostream>
using namespace std;
Infantry::Infantry(string _name, int _age)
{
	cout << "Infantry::Infantry(string _name, int _age)" << endl;
	m_strName = _name;
	m_iAge = _age;
}

Infantry::~Infantry()
{
	cout << "Infantry::~Infantry()"<<endl;
}

void Infantry::attact()
{
	cout << "Infantry::attact()" << endl;
}
