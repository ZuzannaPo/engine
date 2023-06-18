/**
 * Project Untitled
 */


#ifndef _MONSTER_CREATOR_H
#define _MONSTER_CREATOR_H

#include "monster.h"

class monster;

class monster_creator {
public: 
    
virtual monster* factory() = 0;
};

#endif //_MONSTER_CREATOR_H