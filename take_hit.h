/**
 * Project Untitled
 */


#ifndef _TAKE_HIT_H
#define _TAKE_HIT_H

#include "abstract_handler.h"
#include <string>
#include <iostream>
using namespace std;

class abstract_handler;


class take_hit: public abstract_handler {
public: 

string handle(string request);
};

#endif //_TAKE_HIT_H