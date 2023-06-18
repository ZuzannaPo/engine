#ifndef _USE_MANA_H
#define _USE_MANA_H

#include "abstract_handler.h"
#include <string>
#include <iostream>
using namespace std;

class abstract_handler;

class use_mana: public abstract_handler {
public: 
    

string handle(string request);
};

#endif //_USE_MANA_H