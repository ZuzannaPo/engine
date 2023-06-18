/**
 * Project Untitled
 */


#include "concrete_hero.h"

/**
 * concrete_hero implementation
 */


concrete_hero::concrete_hero(hero _h) {
    this->h = _h;
}


hero concrete_hero::get_state() {
    return this->h;
}