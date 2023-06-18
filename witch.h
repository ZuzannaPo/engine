/**
 * Project Untitled
 */


#ifndef _WITCH_H
#define _WITCH_H

#include "monster.h"
using namespace std;

class monster;

class witch: public monster {
public: 
    

witch();

int get_hp();

int get_exp();

int get_dmg();

int get_type();
};

#endif //_WITCH_H