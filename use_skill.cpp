/**
 * Project Untitled
 */


#include "use_skill.h"

/**
 * use_skill implementation
 */

string use_skill::handle(string request) {
    const char* s = "skill";
    const char* r = request.c_str();
    if(strcmp(r,s) == 0) return request;
    else {
        abstract_handler *a;
        return a->handle(request);
    }
}
    