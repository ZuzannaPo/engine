/**
 * Project Untitled
 */


#ifndef _MEMENTO_HERO_H
#define _MEMENTO_HERO_H

#include "hero.h"

using namespace std;

class hero;

class memento_hero {
public: 
    hero h;
    
virtual hero get_state() = 0;
};

#endif //_MEMENTO_HERO_H