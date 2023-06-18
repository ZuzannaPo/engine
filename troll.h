/**
 * Project Untitled
 */


#ifndef _TROLL_H
#define _TROLL_H

#include "monster.h"
using namespace std;


class troll: public monster {
public: 
    

troll();

int get_hp();

int get_exp();

int get_dmg();

int get_type();
};

#endif //_TROLL_H