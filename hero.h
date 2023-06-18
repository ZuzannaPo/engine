/**
 * Project Untitled
 */


#ifndef _HERO_H
#define _HERO_H

#include "bag.h"
#include "skill.h"
#include "health_potion.h"
#include "mana_potion.h"
#include "punch.h"
#include "flash.h"
#include "blast.h"
#include "health_creator.h"
#include "mana_creator.h"
#include "punch_creator.h"
#include "flash_creator.h"
#include "blast_creator.h"
#include <vector>
#include <string>

using namespace std;

class bag;
class skill;
class health_potion;
class mana_potion;
class punch;
class flash;
class blast;
class health_creator;
class mana_creator;
class punch_creator;
class flash_creator;
class blast_creator;

class hero {
public: 
    

hero();
hero(string n, int t);
string get_name();
int get_type();
int get_hp();
int get_mana();
int get_exp();
bag* get_bag(int x);
skill* get_skill(int x);
void set_name(string n);
void set_type(int t);
void set_hp(int h);
void set_mana(int m);
void set_exp(int e);
void set_bag(vector<bag*> b_);
void set_skill(vector<skill*> s_);

private: 
    string name;
    int type;
    int hp;
    int mana;
    int exp;
    vector <bag*> b;
    vector <skill*> s;
};

#endif //_HERO_H