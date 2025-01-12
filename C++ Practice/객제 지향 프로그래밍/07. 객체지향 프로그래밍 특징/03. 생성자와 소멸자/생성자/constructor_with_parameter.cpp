#include <iostream>
#include <string>
#include <random>

using namespace std;

class character {
public:
  character() {
    cout << "character 클래스 생성자" << endl;
  };
};

class monster {
public:
  monster() {
    cout << "monster 클래스 생성자" << endl;
  };
};

//몬스터 A는 기본 Monster 클래스로부터 상속
class monster_a : public monster, character {
public:
// 기본 생성자
  monster_a() {
    cout << "monster_a 클래스 생성자" << endl;
  };

// 매개 변수가 있는 생성자
  monster_a(int x, int y, string str) : location{ x, y }, name(str) {
    cout << "monster_a 클래스 생성자 (매개변수 추가)" << endl;
  };

  void show_location() {
    cout << "위치(" << location[0] << " , " << location[1] << ")" << endl;
  };

  void show_name() {
    cout << "이름 : " << name << endl;
  };

private:
  int location[2];
  string name;
};

int main() {
  monster_a forest_monster;
  forest_monster.show_location();
  monster_a wood_monster(10, 25, "creaking");
  wood_monster.show_location();
  wood_monster.show_name();

  return 0;
}