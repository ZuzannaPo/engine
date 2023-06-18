/**
 * Project Untitled
 */


#ifndef _MANA_CREATOR_H
#define _MANA_CREATOR_H

#include "bag_creator.h"
#include "bag.h"
#include "mana_potion.h"
using namespace std;

class bag_creator;
class bag;
class mana_potion;

class mana_creator: public bag_creator {
public: 
    

bag* factory();
};

#endif //_MANA_CREATOR_H