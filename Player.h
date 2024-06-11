#pragma once
class FPlayer
{
public://접근지정자
	FPlayer();
	~FPlayer();

	//interface
	void Move();
	void Attack();
	void Pickup();

	//accessor
	void GetGold();
	//mutator
	void SetGold(int NewGold);

private:
	int HP=100;
	int Gold=0;

	void Die();
};