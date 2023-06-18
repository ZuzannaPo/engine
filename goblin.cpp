/**
 * Project Untitled
 */


#include "goblin.h"

/**
 * goblin implementation
 */


goblin::goblin() {
    hp = 5;
    exp = 1;
    dmg = 1;
    type = 3;
}


int goblin::get_hp() {
    return hp;
}


int goblin::get_exp() {
    return exp;
}

int goblin::get_dmg() {
    return dmg;
}


int goblin::get_type() {
    return type;
}