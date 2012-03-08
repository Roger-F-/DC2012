#ifndef GAMEOBJECTMOVEABLE_H_
#define GAMEOBJECTMOVEABLE_H_

#include "GameObjectMoveable.h"
#include "GameObjectStationary.h"
#include "GameObject.h"

class GameObjectFactory {
public:
    GameObjectFactory(std::istream& is): in_(&is) {}
    GameObject *create() {
        std::string type;
    if (!(*in_ >> type))
      return 0;
    if (type == "P")
      return new GOM_Projectile(*in_);
    if (type == "S")
      return new GOM_Ship(*in_);
    if (type == "O")
      return new GOM_Obstacle(*in_);
    if (type == "B")
      return new GOM_Powerup(*in_);

    return 0;  // if it's not one of the valid types
    }


}




#endif