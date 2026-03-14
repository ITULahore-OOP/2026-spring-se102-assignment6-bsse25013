#include "Hero.h"

//Constructors
Hero :: Hero(string hN,int h,int bP){
    heroName = hN;
    health = h;
    basePower = bP;
}
//Default constructor
Hero :: Hero(){
    heroName = "";
    health = 0;
    basePower = 0;
}
//Destructor
Hero :: ~Hero(){
}
//Getters;
string Hero :: getName() const{
    return heroName;
}
int Hero :: getHealth() const{
    return health;
}
int  Hero :: getPower() const{
    return basePower;
}
void Hero :: takeDamage(int damage){
     health -= damage;
    if (health < 0){
        health = 0;
        cout<< "Health shouldn't be less then zero!" <<endl;
    }
}
//Opertors
bool Hero :: operator>(const Hero &other) const{
    return basePower > other.basePower;              
}
int Hero :: operator+(const Hero &other) const{
    return health + other.health;
}

