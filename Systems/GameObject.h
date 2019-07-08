#ifndef GAMEOBJECT_H_
#define GAMEOBJECT_H_

#include <iostream>

using namespace std;

const int maxGameObjects = 100;

class GameObject {
private:
    GameObject *goList = new GameObject[maxGameObjects];
public:
    GameObject();
};

#endif