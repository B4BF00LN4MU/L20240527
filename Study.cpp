#include <iostream>

using namespace std;

class World
{
public:
	
};

class Map : World
{

public:

};

class Player : World, Gold, HP
{
public:

};

class Monster : World, Gold, HP
{
public:
};

class Goblin :Monster
{
public:
};
class Slime : Monster
{
public:
};
class Boar : Monster
{
public:
};

class Gold
{
public:
	int Gold = 0;
};

class HP
{
public:

};

void Create();
void Move();
void Attack();
void Run();
void Rush();
void Slip();
void End();
void Dead();

int main()
{
	Create;
	cout << "@";

	return 0;
}

void Create()
{
	for (int i = 0; i < 10; ++i)
	{
		cout << "@";
	}
	for (int i = 0; i < 8; ++i)
	{
		cout << endl << "@";
		for (int i = 0; i < 8; ++i)
		{
			cout << " ";
		}cout << "@" << endl;
	}
	for (int i = 0; i < 10; ++i)
	{
		cout << "@";
	}
	Player* MyPlayer = new Player();
	Monster* MyMonster = new Monster();
}

void Move()
{
}

void Attack()
{
}

void Run()
{
}

void Rush()
{
}

void Slip()
{
}

void End()
{
}

void Dead()
{
}
