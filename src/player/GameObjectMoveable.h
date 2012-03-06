#ifndef GAMEOBJECTMOVEABLE_H_
#define GAMEOBJECTMOVEABLE_H_

#include "Direction.h"

class GameObjectMoveable : public GameObject
{
	protected:
		int PlayerID;
		Direction ObjDir;
        int playerID;
	public:
		virtual void Accelerate() = 0;
		virtual void Decelerate() = 0;
		virtual GOPos Position() = 0;
};

#endif