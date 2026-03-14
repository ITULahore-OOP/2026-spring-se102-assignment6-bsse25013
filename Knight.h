#ifndef KNIGHT_H
#define KNIGHT_H
#include "Warrior.h"
#include <iostream>
#include <string>
using namespace std;
//Inheritance
class Knight :public Warrior{
    private:
    int chargeBonus;

    public:
    //Constructor
    Knight(string,int,int,int,int);
    //Getters
    int getChargeBonus();
    //Calculation
    int calculateBurstDamage() const ;

};
#endif