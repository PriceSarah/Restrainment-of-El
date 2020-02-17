#pragma once
#include "Entity.h"

class Enemy
{
public:
	Enemy();
	~Enemy();
	float Speed = 1;

private:

	//Direction _facing;
	void HitPlayer();
	void Move();

};

