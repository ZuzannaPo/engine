/**
 * Project Untitled
 */


#ifndef _GAIN_EXP_H
#define _GAIN_EXP_H

#include "abstract_handler.h"
#include <cstring>
using namespace std;

class abstract_handler;

class gain_exp: public abstract_handler {
public: 
    

string handle(string request);
};

#endif //_GAIN_EXP_H