#pragma once
#include "Entity.h"

class Enemy
{
public:
	Enemy();
	~Enemy();
	float Speed = 1;
	float Health = 10;
	float Attack = 5;

private:

	//Direction _facing;
	void HitPlayer();
	void Move();


};

