/**
 * Project Untitled
 */


#ifndef _HANDLER_H
#define _HANDLER_H

#include <string>
using namespace std;

class handler {
public: 
    

virtual string handle(string request) = 0;
    

virtual void set_next(handler* h) = 0;
};

#endif //_HANDLER_H