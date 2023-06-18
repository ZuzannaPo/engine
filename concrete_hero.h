/**
 * Project Untitled
 */


#ifndef _CONCRETE_HERO_H
#define _CONCRETE_HERO_H

#include "memento_hero.h"
using namespace std;

class memento_hero;
class hero;

class concrete_hero: public memento_hero {
public: 
    

concrete_hero(hero _h);

hero get_state();
};

#endif //_CONCRETE_HERO_H