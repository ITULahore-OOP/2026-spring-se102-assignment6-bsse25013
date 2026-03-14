#include "MagicalEntity.h"
//Constructor
MagicalEntity :: MagicalEntity(int mP,int sP){
    manaPool = mP;
    spellPower = sP;
}

//Accessing private attributes by using getters
int MagicalEntity :: getMana() const{
    return manaPool;
}

int MagicalEntity :: getSpellPower() const{
       return spellPower;
}