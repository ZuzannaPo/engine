/**
 * Project Untitled
 */


#ifndef _USE_POTION_H
#define _USE_POTION_H

#include "abstract_handler.h"
#include <string>
#include <iostream>
using namespace std;

class abstract_handler;

class use_potion: public abstract_handler {
public: 
    

string handle(string request);
};

#endif //_USE_POTION_H