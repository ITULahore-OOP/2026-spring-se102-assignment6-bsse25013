#ifndef SPELLBLADE_H
#define SPELLBLADE_H
#include "MagicalEntity.h"
#include "Warrior.h"
#include <iostream>
#include <string>
using namespace std;

class Spellblade : public Warrior , MagicalEntity{
    public:
    Spellblade(string,int,int,int,int,int);
    int calculateHybridDamage() const;
};
#endif