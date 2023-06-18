/**
 * Project Untitled
 */


#ifndef _BLAST_H
#define _BLAST_H

#include "skill.h"
using namespace std;

class skill;


class blast: public skill {
public: 
    

blast(); 

int get_type(); 

int get_mana();
    
int get_dmg();
};

#endif //_BLAST_H