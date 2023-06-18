/**
 * Project Untitled
 */


#ifndef _USE_BAG_H
#define _USE_BAG_H

#include "abstract_handler.h"
#include <string>
#include <iostream>

using namespace std;

class abstract_handler;

class use_bag: public abstract_handler {
public: 
    

string handle(string request);
};

#endif //_USE_BAG_H