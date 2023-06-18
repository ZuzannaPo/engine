/**
 * Project Untitled
 */


#ifndef _WITCH_CREATOR_H
#define _WITCH_CREATOR_H

#include "monster_creator.h"
#include "witch.h"
using namespace std;

class monster;
class monster_creator;
class witch;

class witch_creator: public monster_creator {
public: 
    

monster* factory();
};

#endif //_WITCH_CREATOR_H