#include "Soldier.h"
#include <iostream>
using namespace std;
Soldier::Soldier()
{
	cout << "Soldier()" << endl;
}

void Soldier::play()
{
	cout << "Soldier()--play()" << endl;
	cout << m_strName << endl;
	cout << Person::m_strName << endl;
}

void Soldier::work()
{
	m_strName = "Jack";
	Person::m_strName = "James";
	cout << "Soldier()--work()" << endl;
}
