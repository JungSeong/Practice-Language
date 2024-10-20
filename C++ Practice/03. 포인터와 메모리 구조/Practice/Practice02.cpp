#include <iostream>
using namespace std;

struct Monster
{
    std::string name;
    int level;
    float attack;
    float health;
    float resist;
};

int main()
{
    Monster monster = {"±«¹°Áã", 12, 20, 100, 23.5};
    cout << monster.name << ' ' << monster.level << ' ' << monster.attack
    << ' ' << monster.health << ' ' << monster.resist << endl; 
}