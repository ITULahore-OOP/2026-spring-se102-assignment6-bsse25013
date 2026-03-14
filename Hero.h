#ifndef HERO_H
#define HERO_H
#include <iostream>
#include <string>
using namespace std;

//Hero is composed in the guild
class Hero{
    protected:
    string heroName;
    int health;
    int basePower;

    public:
    //Constructor
    Hero(string,int,int);
    //Default constructor
    Hero();
    //destructor
    ~Hero();
    //getters
    string getName() const;
    int getHealth() const;
    int getPower() const;
	void takeDamage(int damage);
    //Operators
    bool operator>(const Hero &other) const;
    int operator+(const Hero &other) const;
};
#endif