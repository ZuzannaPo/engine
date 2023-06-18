/**
 * Project Untitled
 */


#ifndef _SKILL_H
#define _SKILL_H

using namespace std;

class skill {
public: 
    int dmg;
    int mana_cost;
    int type;
    
virtual int get_type() = 0;
    
virtual int get_mana() = 0;
    
virtual int get_dmg() = 0;
};

#endif //_SKILL_H