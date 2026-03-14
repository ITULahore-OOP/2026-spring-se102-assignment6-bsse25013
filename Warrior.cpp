#include "Warrior.h"

Warrior :: Warrior (string hN,int h,int bP,int aR) : Hero( hN, h, bP){
    armorRating = aR;
}
//getter
int Warrior :: getArmor(){
    return armorRating;
}
//calculating effective health
int Warrior :: calculateEffectiveHealth() const{
    return health + (armorRating*2);
}