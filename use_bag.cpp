/**
 * Project Untitled
 */


#include "use_bag.h"

/**
 * use_bag implementation
 */


string use_bag::handle(string request) {
     const char* b = "bag";
     const char* r request.c_str();
     if(stricmp(r,b) == 0) return request;
    else {
         abstract_handler a;
         return a->handle(request);
     }
}