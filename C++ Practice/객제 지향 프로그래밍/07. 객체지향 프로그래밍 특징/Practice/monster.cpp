#include <iostream>
using namespace std;

class character {
public:
  character() : hp(100), power(100) {};
  void get_damage(int _damage) {hp -= _damage;};
  void show_hp(){cout << hp << endl; if (hp < 0) {print_death();}};
  virtual void print_death();
  virtual void attack_special(character& target) {};

protected:
  int hp;
  int power;
};

void character::print_death()
{
  cout << "캐릭터가 쓰러졌습니다!" << endl;
}

//character 클래스를 상속 받은 player 클래스
class player : public virtual character {
    public:
        player() {};
    void attack_special(character& target_monster) override
    {
        cout << "기본 공격 : 데미지 - 20 hp" << endl;
        target_monster.get_damage(20);
    }

    void print_death() override
    {
      cout << "플레이어가 쓰러졌습니다!" << endl;
    }
};

//character 클래스를 상속 받은 monster 클래스
class monster : public virtual character{
public:
     monster() {};

    // monster 클래스의 멤버 함수 : attack_special
    void attack_special(character& target_player) override
    {
        cout << "기본 공격 : 데미지 - 10 hp" << endl;
        target_player.get_damage(10);
    }
};

//몬스터 A는 기본 Monster 클래스로부터 상속
class monster_a : public monster {
public:
    //상속받은 함수 오버라이딩 
    void attack_special(player& target_player);
};

void monster_a::attack_special(player& target_player) {
    cout << "인텡글 공격 : 데미지 - 15 hp" << endl;
    target_player.get_damage(15);
}

//몬스터 B는 기본 Monster 클래스로부터 상속
class monster_b : public monster {
public:
  //상속받은 함수 오버라이딩
  void attack_special(player& target_player);
};

void monster_b::attack_special(player& target_player) {
  cout << "가상 공격 : 데미지 - 30 hp" << endl;
  target_player.get_damage(30);
}

//몬스터 C는 기본 Monster 클래스로부터 상속
class monster_c : public monster {
public:
  //상속받은 함수 오버라이딩
  void attack_special(player& target_player);
};

void monster_c::attack_special(player& target_player) {
  cout << "강력 뇌전 공격 : 데미지 - 100 hp" << endl;
  target_player.get_damage(100);
}

int main() {
  player player_1;

  monster_a forest_monster;
  monster_b tutorial_monster;
  monster_c boss_monster;

  cout << "몬스터 총 공격" << endl;
  tutorial_monster.attack_special(player_1);
  player_1.show_hp();
  forest_monster.show_hp();
  forest_monster.attack_special(player_1);
  player_1.show_hp();
  forest_monster.show_hp();
  player_1.attack_special(forest_monster);
  player_1.show_hp();
  forest_monster.show_hp();
  boss_monster.attack_special(player_1);
  player_1.show_hp();
  forest_monster.show_hp();

  return 0;
}