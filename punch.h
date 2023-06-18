/**
 * Project Untitled
 */


#ifndef _PUNCH_H
#define _PUNCH_H

#include "skill.h"
using namespace std;

class skill;

class punch: public skill {
public: 
    

punch();

int get_type();

int get_mana();

int get_dmg();
};

#endif //_PUNCH_H