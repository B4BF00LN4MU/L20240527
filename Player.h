#pragma once
class FPlayer
{
public://����������
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