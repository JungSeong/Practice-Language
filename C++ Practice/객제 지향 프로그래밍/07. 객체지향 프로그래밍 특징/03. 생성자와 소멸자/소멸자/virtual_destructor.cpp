#include <iostream>
#include <random>
using namespace std;

class monster {
public:
  monster() {
    cout << "monster 클래스 생성자" << endl;
  };
  virtual ~monster() {
    cout << "monster 클래스 소멸자" << endl;
  };
};

//몬스터 A는 기본 Monster 클래스로부터 상속
class monster_a : public monster {
public:
  monster_a() {
    cout << "monster_a 클래스 생성자" << endl;
  };
  virtual ~monster_a() {
    cout << "monster_a 클래스 소멸자" << endl;
  }
};

int main() {
  monster* forest_monster = new monster_a();
  delete forest_monster;
  return 0;
}