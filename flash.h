/**
 * Project Untitled
 */


#ifndef _FLASH_H
#define _FLASH_H

#include "skill.h"
using namespace std;

class skill;

class flash: public skill {
public: 
    

flash();

int get_type();

int get_mana();

int get_dmg();
};

#endif //_FLASH_H