#ifndef GAMEOBJECTMOVEABLE_H_
#define GAMEOBJECTMOVEABLE_H_

#include "Direction.h"

class GameObjectMoveable : public GameObject
{
	protected:
		Direction ObjDir;
        int playerID;
	public:
		virtual GOPos Position() = 0;
};

#endif