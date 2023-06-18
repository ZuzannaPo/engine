/**
 * Project Untitled
 */


#include "flash.h"

/**
 * flash implementation
 */



flash::flash() {
    dmg = 50;
    mana_cost = 30;
    type = 2;
}


int flash::get_type() {
    return type;
}


int flash::get_mana() {
    return mana_cost;
}


int flash::get_dmg() {
    return dmg;
}