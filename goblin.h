/**
 * Project Untitled
 */


#ifndef _GOBLIN_H
#define _GOBLIN_H

#include "monster.h"
using namespace std;

class monster;


class goblin: public monster {
public: 
    

goblin();

int get_hp();

int get_exp();

int get_dmg();

int get_type();
};

#endif //_GOBLIN_H