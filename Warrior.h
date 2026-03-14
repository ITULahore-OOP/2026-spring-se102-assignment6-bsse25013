#ifndef WARRIOR_H
#define WARRIOR_H
#include "Hero.h"
#include <iostream>
#include <string>
using namespace std;

//Warrier is inherited from hero
class Warrior : public Hero{
    private:
    int armorRating;
    public:
    //constructor
    Warrior(string,int,int,int);
    //getters
    int getArmor();
    int calculateEffectiveHealth() const;
};
#endif