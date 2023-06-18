/**
 * Project Untitled
 */


#ifndef _MONSTER_H
#define _MONSTER_H

using namespace std;

class monster {
public: 
    int hp;
    int exp;
    int dmg;
    int type;
    
virtual int get_hp() = 0;
    
virtual int get_exp() = 0;
    
virtual int get_dmg() = 0;
    
virtual int get_type() = 0;
};

#endif //_MONSTER_H