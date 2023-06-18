/**
 * Project Untitled
 */


#ifndef _SKILL_CREATOR_H
#define _SKILL_CREATOR_H

#include "skill.h"
using namespace std;

class skill;
class skill_creator {
public: 
    
virtual skill* factory() = 0;
};

#endif //_SKILL_CREATOR_H