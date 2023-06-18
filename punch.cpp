/**
 * Project Untitled
 */


#include "punch.h"

/**
 * punch implementation
 */


punch::punch() {
    dmg = 30;
    mana_cost = 0;
    type = 1;
}

int punch::get_type() {
    return type;
}


int punch::get_mana() {
    return mana_cost;
}

 
int punch::get_dmg() {
    return dmg;
}