#include "Guild.h"

Guild :: Guild(string gN){
    guildName = gN;
    memberCount = 0;
}
//Destructor
Guild :: ~Guild(){
    cout << "The guild " << guildName << " has been disbanded!" << endl;

}
//Calculating guildpower
int Guild::calculateTotalGuildPower(){
    int total = 0;
    for(int i = 0; i < memberCount; i++)    
    {
        total += roster[i].getPower();
    }
    return total;
}
//Displaying stats
void Guild::displayGuildStats(){
    cout << "Guild Name: " << guildName << endl;
    cout << "Total Members: " << memberCount << "/15" << endl;
    cout << "Total Guild Power: " << calculateTotalGuildPower() << endl;
}
//Operator overloading
void Guild::operator+=(Hero* newHero){
    if(memberCount < 15){
        roster[memberCount] = *newHero;
        memberCount++;
    }
    else
    {
        cout<< "Guild is at full capacity!" << endl;
    }
}
ostream& operator<<(ostream& os, const Guild& g){
    os << "Guild: " << g.guildName << endl;
    os << "Members: " << g.memberCount << endl;

    for(int i = 0; i < g.memberCount; i++)
    {
        os << "- " << g.roster[i].getName()
           << " (Power: "
           << g.roster[i].getPower()
           << ")" << endl;
    }

    return os;
}