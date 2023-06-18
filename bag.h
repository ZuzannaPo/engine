/**
 * Project Untitled
 */


#ifndef _BAG_H
#define _BAG_H

using namespace std;

class bag {
public: 
    int amount;
    int type;
    
virtual int get_type() = 0;
    
virtual int get_amount() = 0;
};

#endif //_BAG_H