/**
 * Project Untitled
 */


#ifndef _BLAST_CREATOR_H
#define _BLAST_CREATOR_H

#include "skill_creator.h"
#include "blast.h"
using namespace std;

class skill_creator;
class skill;
class blast;


class blast_creator: public skill_creator {
public: 
    

skill* factory();
};

#endif //_BLAST_CREATOR_H