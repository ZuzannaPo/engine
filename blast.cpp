/**
 * Project Untitled
 */


#include "blast.h"  

blast::blast() {
    dmg = 100;
    mana_cost = 80;
    type = 3;
}


int blast::get_type() {
    return type;
}


int blast::get_mana() {
    return mana_cost;
}


int blast::get_dmg() {
    return dmg;
}