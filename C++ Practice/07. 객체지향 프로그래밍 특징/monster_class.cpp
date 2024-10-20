#include <iostream>

using namespace std;

class character{
    public :
        character() : hp(100), power(100){}; // 맴버 초기화 리스트, 생성자가 실행되기 전에 맴버 변수가 초기화 됨

    protected :
        int hp;
        int power;
};

class player : public character {
    public :
        player(){};
};

class monster{
    public :
        monster(){};
        void get_damage(int damage){};
        void attack(player target_player){};
        void attack_special(player target_player);
};

void monster::attack_special(player target_player)
{
    cout << "기본 공격 : 데미지 -10 hp" << endl;
}

class monster_a : public monster, character
{
    public :
        void attack_special(player target_player);
};

void monster_a::attack_special(player target_player)
{
    cout << "인텡글 공격 : 데미지 - 15hp" << endl;
};

class monster_b : public monster, character
{
    public :
        void attack_special(player target_player);
};

void monster_b::attack_special(player target_player)
{
    cout << "가상 공격 : 데미지 - 8hp" << endl;
};

class monster_c : public monster, character
{
    public :
        void attack_special(player target_player);
};

void monster_c::attack_special(player target_player)
{
    cout << "강력 뇌전 공격 : 데미지 - 50hp" << endl;
};

int main()
{
    player player1;

    monster_a forest_monster;
    monster_b tutorial_monster;
    monster_c boss_monster;

    cout << "몬스터 총 공격" << endl;
    forest_monster.attack_special(player1);
    tutorial_monster.attack_special(player1);
    boss_monster.attack_special(player1);
}