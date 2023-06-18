/**
 * Project Untitled
 */


#ifndef _HEALTH_CREATOR_H
#define _HEALTH_CREATOR_H

#include "bag_creator.h"
#include "bag.h"
#include "health_potion.h"
using namespace std;

class bag_creator;
class bag;
class health_potion;


class health_creator: public bag_creator {
public: 

bag* factory();
};

#endif //_HEALTH_CREATOR_H