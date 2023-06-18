/**
 * Project Untitled
 */


#ifndef _FLASH_CREATOR_H
#define _FLASH_CREATOR_H

#include "skill_creator.h"
#include "flash.h"
using namespace std;

class skill_creator;
class skill;
class flash;


class flash_creator: public skill_creator {
public: 
    

skill* factory();
};

#endif //_FLASH_CREATOR_H