/**
 * Project Untitled
 */


#include "health_potion.h"

/**
 * health_potion implementation
 */



health_potion::health_potion() {
    amount = 50;
    type = 1;
}


int health_potion::get_type() {
    return type;
}


int health_potion::get_amount() {
    return amount;
}