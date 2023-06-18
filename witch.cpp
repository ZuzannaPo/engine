/**
 * Project Untitled
 */


#include "witch.h"

/**
 * witch implementation
 */


witch::witch() {
    hp = 80;
    exp = 50;
    dmg = 20;
    type = 2;
}


int witch::get_hp() {
    return hp;
}

int witch::get_exp() {
    return exp;
}


int witch::get_dmg() {
    return dmg;
}

int witch::get_type() {
    return type;
}