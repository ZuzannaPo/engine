/**
 * Project Untitled
 */


#include "troll.h"

/**
 * troll implementation
 */


troll::troll() {
    hp = 30;
    exp = 10;
    dmg = 5;
    type = 1;
}

    
int troll::get_hp() {
    return hp;
}

int troll::get_exp() {
    return exp;
}


int troll::get_dmg() {
    return dmg;
}


int troll::get_type() {
    return type;
}