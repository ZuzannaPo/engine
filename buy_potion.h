/**
 * Project Untitled
 */


#ifndef _BUY_POTION_H
#define _BUY_POTION_H

#include "abstract_handler.h"
#include <cstring>
using namespace std;

class abstract_handler;


class buy_potion: public abstract_handler {
public: 

string handle(string request);
};

#endif //_BUY_POTION_H