/**
 * Project Untitled
 */


#include "hero.h"

/**
 * hero implementation
 */

hero::hero() {
    name = "default";
    type = 0;
    hp = 100;
    mana = 100;
    exp = 0;
    
    health_creator h;
    mana_creator m;
    
    auto health = h.factory();
    auto mana = m.factory();
    
    b.push_back(health);
    b.push_back(mana);
    
    punch_creator p;
    flash_creator f;
    blast_creator b;
    
    auto punch = p.factory();
    auto flash = f.factory();
    auto blast = b.factory();
    
    s.push_back(punch);
    s.push_back(flash);
    s.push_back(blast);
}

hero::hero(string n, int t) {

    name = n;
    type = t;

    if(type == 1) {
        hp = 100;
        mana = 50;
    }
    else if(type == 2) {
        hp = 50;
        mana = 100;
    }

    exp = 0;
    
    health_creator h;
    mana_creator m;
    
    auto health = h.factory();
    auto mana = m.factory();
    
    b.push_back(health);
    b.push_back(mana);
    
    punch_creator p;
    flash_creator f;
    blast_creator b;
    
    auto punch = p.factory();
    auto flash = f.factory();
    auto blast = b.factory();
    
    s.push_back(punch);
    s.push_back(flash);
    s.push_back(blast);
   
}

string hero::get_name() {
    return this->name;
}

int hero::get_type() {
    return this->type;
}

int hero::get_hp() {
    return this->hp;
}

int hero::get_mana() {
    return this->mana;
}

int hero::get_exp() {
    return this->exp;
}

bag* hero::get_bag(int x) {
    return this->b[x];
}

skill* hero::get_skill(int x) {
    return this->s[x];
}

void hero::set_name(string n) {
    this->name = n;
}

void hero::set_type(int t) {
    this->type = t;
}

void hero::set_hp(int h) {
    this->hp = h;
}

void hero::set_mana(int m) {
    this->mana = m;
}

void hero::set_exp(int e) {
    this->exp = e;
}

void hero::set_bag(vector<bag*> b_) {
    this->b.assign(b_);
}

void hero::set_skill(vector<skill*> s_) {
    this->s.assign(s_);
}