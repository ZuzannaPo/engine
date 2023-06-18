/**
 * Project Untitled
 */


#include "take_hit.h"

/**
 * take_hit implementation
 */


string take_hit::handle(string request) {
     const char* hit = "hit";
     const char* r = request.c_str();
    if(stricmp(r,hit) == 0) {
 
         return request;
    }
    else {
        abstract_handler a;
        return a->handle(request);
    }
}