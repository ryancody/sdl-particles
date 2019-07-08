#ifndef COLLISION_H_
#define COLLISION_H_

#include <iostream>
#include "GameObject.h"

using namespace std;

class Collision {
private:
    GameObject gameObjects;
    int count;

public:
    Collision();
    
    void calculate();
};

#endif