/**
 * Project Untitled
 */


#ifndef _MANA_POTION_H
#define _MANA_POTION_H

#include "bag.h"
using namespace std;

class bag;

class mana_potion: public bag {
public: 
    

mana_potion();

int get_type();

int get_amount();
};

#endif //_MANA_POTION_H