/**
 * Project Untitled
 */


#include "gain_exp.h"

/**
 * gain_exp implementation
 */


string gain_exp::handle(string request) {
    const char* exp = "exp";
    const char* r = request.c_str();
    if(strcmp(r,exp) == 0) return request;
    else {
        abstract_handler a;
        return a->handle(request);
    }
}