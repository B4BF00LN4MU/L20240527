#pragma once
class FMonster
{
public:
	FMonster();
	~FMonster();

	//interface
	virtual void Move(); //virtual funtion table
	void Attack();
	void Pickup();

	//accessor
	void GetGold();
	//mutator
	void SetGold(int NewGold);
	void Attacked();
	
	protected:
	int HP=0;
	int Gold=0;

	void Die();
};

