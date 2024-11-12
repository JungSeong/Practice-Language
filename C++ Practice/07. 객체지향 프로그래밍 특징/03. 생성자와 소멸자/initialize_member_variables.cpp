#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class character {
public:
  character() : hp(100), power(100) {
  };

  void get_damage(int _damage) {};
protected:
  int hp;
  int power;
};

//Player 클래스
class player : public character {
public:
  player() {};
};

//기본 Monster 클래스
class monster {
public:
  void attack(player target_player) {};
  virtual void attack_special(player target_player);
};

void monster::attack_special(player target_player) {
  cout << "기본 공격 : 데미지 - 10 hp" << endl;
}


//몬스터 A는 기본 Monster 클래스로부터 상속
class monster_b : public monster, character {
public:
  monster_b(player& attack_target)
    : monster_type("일반"),         // 직접 초기화 : 맴버 변수에 값을 직접 대입
    location{ 0,0 },                // 유니폼 초기화 : 배열 형태의 맴버 변수를 초기화
    unique_id(++total_count),       // 상수 변수 초기화 : 상수 멤버 변수는 객체 생성과 동시에 값을 초기화 해야 한다
    target(attack_target) {         // 레퍼런스 변수 초기화 : 레퍼런스 매개 변수도 객체 생성과 동시에 값을 정해야 한다
    difficult_level = 10;           // 복사 초기화 : 정의부에서 멤버 변수에 값을 직접 대입한다.
    quiz = new char[1024];          // 동적 메모리 할당 : 셍성자에서 메모리를 직접 초기화 할 수 있다.
  };

  ~monster_b() {
    delete[] quiz;
    total_count--;
  };

  void set_quiz(const char* new_quiz) { strcpy(quiz, new_quiz); };
  void set_type(string type) { monster_type = type; };
  void set_difficult_level(int level) { difficult_level = level; };
  void set_location(int x, int y) { location[0] = x; location[1] = y; };
  char* get_quiz() { return quiz; };
  string get_type() { return monster_type; };
  int get_difficult_level() { return difficult_level; };
  int get_x_location() { return location[0]; };
  int get_y_location() { return location[1]; };
  int print_unique() { return unique_id; };
  int print_count() { return total_count; };

private:
  const int unique_id;
  player& target;
  static int total_count;
  char* quiz;
  string monster_type;
  int difficult_level;
  int location[2];
};

int monster_b::total_count = 0; // 정적 변수 초기화 : 

int main() {
  player first_player;
  monster_b first_mon(first_player);
  first_mon.set_quiz("아침에 네발, 점심에는 두발, 저녁에는 두발인 것은?");
  first_mon.set_difficult_level(100);
  first_mon.set_type("수수께끼 몬스터");
  first_mon.set_location(30, 30);
  
//   monster_b second_mon(first_player);
  monster_b second_mon = first_mon;
  second_mon.set_quiz("문이 뒤집어 지면 무엇이 될까?");
  second_mon.set_location(45, 50);

  cout << "[" << first_mon.get_x_location() << " , " << first_mon.get_y_location()
    << "] 첫번째 몬스터(" << first_mon.get_type() << " - "
    << first_mon.get_difficult_level()
    << ")가 내는 수수께끼 : " << first_mon.get_quiz() << endl;
  cout << "[" << second_mon.get_x_location() << " , " << second_mon.get_y_location()
    << "] 두번째 몬스터(" << second_mon.get_type() << " - "
    << second_mon.get_difficult_level()
    << ")가 내는 수수께끼 : " << second_mon.get_quiz() << endl;
  cout << first_mon.print_unique() << " , " << first_mon.print_count() << " , "
  << second_mon.print_unique() << " , " << second_mon.print_count() << endl;

  return 0;
}
