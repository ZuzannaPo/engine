/**
 * Project Untitled
 */


#ifndef _PUNCH_CREATOR_H
#define _PUNCH_CREATOR_H

#include "skill_creator.h"
#include "punch.h"
using namespace std;

class skill;
class punch;
class skill_creator;

class punch_creator: public skill_creator {
public: 
    

skill* factory();
};

#endif //_PUNCH_CREATOR_H