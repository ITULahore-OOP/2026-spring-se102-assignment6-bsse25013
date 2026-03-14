#include "Spellblade.h"

//Conctructor
Spellblade::Spellblade(string hN, int h, int bP,int aR, int mP, int sP)
: Warrior(hN, h, bP, 0), MagicalEntity(mP, sP){
     cout<< "Spellblade Constructor!" <<endl;
}


int Spellblade :: calculateHybridDamage() const{
    return basePower + spellPower;     //Formuala is given
}