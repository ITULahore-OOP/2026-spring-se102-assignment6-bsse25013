#include "Knight.h"
//Constructor
Knight :: Knight(string hN,int h,int bP,int aR,int cB):Warrior(hN,h,bP,aR){
    chargeBonus = cB;
}
int Knight :: getChargeBonus(){
    return chargeBonus;
}

//Calculation of burst damage
int Knight :: calculateBurstDamage() const{
    return basePower + chargeBonus;
}
