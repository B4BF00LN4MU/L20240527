#include <iostream>
#include "World.h"
#include "Player.h"
#include "Goblin.h"
#include "WildBoar.h"
#include "Slime.h"
#include <random>

using namespace std;

//			상속		외부 사용(캡슐화)
//public	0		0
//protected	0		X
//private	X		X

int main()
{
	srand((unsigned int)time(NULL));
	int GoblinCount = rand() % 3+1;
	vector<FGoblin*> Goblins;
	
	for (int i = 0; i < GoblinCount; ++i)
	{
		Goblins.push_back(new FGoblin);
		Goblins[i]->SetGold(100 + i);
	}
	for (int i = 0; i < GoblinCount; ++i)
	{
		cout << Goblins[i]->GetGold();
	}

	FGoblin* Goblin = new FGoblin[GoblinCount];

	Goblin->Move();
	/*
	for (int i = 0; i < GoblinCount; i++)
	{
		Goblin[i].Move();
	}
	*/
	for (int i = 0; i < rand() % 3; i++)
	{
		FWildBoar* WildBoar = new FWildBoar();
	}
	FPlayer* Player = new FPlayer();
	//if(Attacked())
	//{
	//	if (Goblin.HP == 0)
	//	{
	//		GetGold();
	//		delete Goblin;
	//	}
	//}
	delete Goblin[0];
	delete Slime;
	delete WildBoar[0];
	delete Player;
	delete World;

	// 모든 몬스터 1~3
	// 플레이어는 1명





	return 0;
}