/**
 * Project Untitled
 */


#include "use_potion.h"

/**
 * use_potion implementation
 */


string use_potion::handle(string request) {
    const char* m = "mana";
    const char* r = request.c_str();
    if(strcmp(r,m) == 0) return request;
    else {
        abstract_handler a;
        return a->handle(request);
    }
}