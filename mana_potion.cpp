/**
 * Project Untitled
 */


#include "mana_potion.h"

/**
 * mana_potion implementation
 */

mana_potion::mana_potion() {
    amount = 30;
    type = 2;
}

 
int mana_potion::get_type() {
    return type;
}

 
int mana_potion::get_amount() {
    return amount;
}