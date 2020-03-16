#pragma once
#include "Entity.h"
#include "List.h"

class Room
{
public:
	Room();
	~Room();
	Entity Start();

private:

	List<Entity> _entities();
	List<Entity> _removals();
	int _sizeX;
	int _sizeY;
	bool _started = false;

protected:
	Entity _parent;

};

