/**
 * Project Untitled
 */


#ifndef _GOBLIN_CREATOR_H
#define _GOBLIN_CREATOR_H

#include "monster_creator.h"
#include "goblin.h"
using namespace std;

class monster_creator;
class monster;
class goblin;


class goblin_creator: public monster_creator {
public: 
    

monster* factory();
};

#endif //_GOBLIN_CREATOR_H