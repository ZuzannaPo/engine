/**
 * Project Untitled
 */


#ifndef _ABSTRACT_HANDLER_H
#define _ABSTRACT_HANDLER_H

#include "handler.h"
#include "hero.h"
#include "memento_hero.h"
#include "concrete_hero.h"
#include "take_hit.h"
#include "use_mana.h"
#include "gain_exp.h"
#include "use_bag.h"
#include "use_skill.h"
#include "buy_potion.h"
#include <cstring>
#include <iostream>
using namespace std;

class handler;
class hero;
class memento_hero;
class concrete_hero;
class take_hit;
class use_mana;
class gain_exp;
class use_bag;
class use_skill;
class buy_potion;



class abstract_handler: public handler {
public: 
    hero h;
    handler* next;
    

void set_next(handler* _h);
    
string handle(string request);
    
memento_hero* save();
    
void restore(memento_hero* m);
};

#endif //_ABSTRACT_HANDLER_H