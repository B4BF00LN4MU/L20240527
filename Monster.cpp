#include "Monster.h"

#include <iostream>

using namespace std;

FMonster::FMonster()
{
	cout << "FMonster Constructor" << endl;
}

FMonster::~FMonster()
{
	cout << "FMonster Destructor" << endl;
}

void FMonster::Move()
{
}

void FMonster::Attack()
{
}

void FMonster::Pickup()
{
}

void FMonster::GetGold()
{
}

void FMonster::SetGold(int NewGold)
{

}

void FMonster::Attacked()
{
	HP = HP - 100;
}

void FMonster::Die()
{
}
