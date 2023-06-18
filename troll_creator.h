/**
 * Project Untitled
 */


#ifndef _TROLL_CREATOR_H
#define _TROLL_CREATOR_H

#include "monster_creator.h"
#include "troll.h"
using namespace std;

class monster;
class troll;
class monster_creator;


class troll_creator: public monster_creator {
public: 
    

monster* factory();
};

#endif //_TROLL_CREATOR_H