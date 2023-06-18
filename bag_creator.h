/**
 * Project Untitled
 */


#ifndef _BAG_CREATOR_H
#define _BAG_CREATOR_H

using namespace std;
class bag;

class bag_creator {
public: 
    
virtual bag* factory() = 0;
};

#endif //_BAG_CREATOR_H