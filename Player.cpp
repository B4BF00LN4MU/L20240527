#include "Player.h"

#include <iostream>

using namespace std;

FPlayer::FPlayer() : HP(0),Gold(0)
{
	cout << "FPlayer Constructor" << endl;
}

FPlayer::~FPlayer()
{
	cout << "FPlayer Destructor" << endl;

}

void FPlayer::Move()
{
}

void FPlayer::Attack()
{
}

void FPlayer::Pickup()
{
}


void FPlayer::Die()
{
}

void FPlayer::GetGold()
{
}

void FPlayer::SetGold(int NewGold)
{
	Gold = NewGold;
}
