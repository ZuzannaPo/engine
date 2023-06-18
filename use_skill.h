/**
 * Project Untitled
 */


#ifndef _USE_SKILL_H
#define _USE_SKILL_H

#include "abstract_handler.h"
#include <cstring>
#include <iostream>
using namespace std;

class abstract_handler;
class skill;

class use_skill: public abstract_handler {
public: 
    

string handle(string request);
};

#endif //_USE_SKILL_H