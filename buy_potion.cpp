/**
 * Project Untitled
 */


#include "buy_potion.h"

/**
 * buy_potion implementation
 */


string buy_potion::handle(string request) {
    const char* buy = "buy";
    const char* r = request.c_str();
    if(strcmp(r,"buy") == 0) return request;
    else {
       abstract_handler a;
       return a->handle(request);
    }
}
