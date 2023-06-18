/**
 * Project Untitled
 */


#include "abstract_handler.h"


void abstract_handler::set_next(handler* _h) {
    next = _h;
}

string abstract_handler::handle(string request) {
    if(strcmp(request,"hit") == 0) {
        next = new take_hit();
        next->handle(request);
    }
    else if(strcmp(request,"mana") == 0) {
       next = new use_mana();
       next->handle(request);
    }
 
    else if(strcmp(request,"exp") == 0) {
       next = new gain_exp();
       next->handle(request);
    }
  
    else if(strcmp(request,"bag") == 0) {
        next = new use_bag();
        next->handle(request);
    }
   
    else if(strcmp(request,"skill") == 0) {
       next = new use_skill();
       next->handle(request);
    }

    else if(strcmp(request,"buy") == 0) {
        next = new buy_potion();
        next->handle(request);
    }
}

memento_hero* abstract_handler::save() {
    memento_hero* m = new concrete_hero(h);
    return m;
}

void abstract_handler::restore(memento_hero* m) {
    h = m->get_state();
}