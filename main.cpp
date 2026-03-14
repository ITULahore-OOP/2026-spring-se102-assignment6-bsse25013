#include <iostream>
#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "Guild.h"

using namespace std;

int main()
{
    // Create Guild
    Guild g("Fellowship");

    // Create Heroes
    Hero h1("Aragorn", 100, 50);
    Warrior w1("Gimli", 120, 40, 10);
    Knight k1("Arthur", 150, 60, 20, 25);

    // Add heroes to guild
    g += &h1;
    g += &w1;
    g += &k1;

    // Display guild using << operator
    cout << g << endl;

    // Display guild stats
    g.displayGuildStats();

    // Check hero comparison
    if (k1 > h1)
        cout << k1.getName() << " is stronger than " << h1.getName() << endl;

    // Check combined vitality
    cout << "Combined Vitality: " << (h1 + w1) << endl;

    // Knight burst damage
    cout << "Knight Burst Damage: " << k1.calculateBurstDamage() << endl;

    // Warrior effective health
    cout << "Warrior Effective Health: " << w1.calculateEffectiveHealth() << endl;

    return 0;
}