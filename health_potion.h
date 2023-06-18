/**
 * Project Untitled
 */


#ifndef _HEALTH_POTION_H
#define _HEALTH_POTION_H

#include "bag.h"
using namespace std;

class bag;

class health_potion: public bag {
public: 
    

health_potion();

int get_type();

int get_amount();
};

#endif //_HEALTH_POTION_H