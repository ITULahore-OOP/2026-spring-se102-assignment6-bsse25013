#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H
#include <iostream>
#include <string>
using namespace std;

class MagicalEntity{
    protected:
    int manaPool;
    int spellPower;

    public:
    //Constructor
    MagicalEntity(int, int);
    //Getters
    int getMana() const;
    int getSpellPower() const;
};

#endif