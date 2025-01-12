## C++ 프로그램 빌드 과정
전처리 : 소스 파일이 컴파일 되기 전에 소스 코드를 변경 / 확장하는 작업<br>
컴파일 : 소스 코드를 PC가 이해할 수 있는 언어로 바꾸는 과정<br>
링크 : 컴파일하여 만든 오브젝트 파일들을 하나의 실행 파일로 묶는 과정<br>
빌드 : 링크를 거쳐 최종 실행 파일을 만드는 과정

전처리 -> 컴파일 -> 링크 -> 빌드

## C++ 표준 입출력
||C|C++|
|---|---|---|
|헤더 파일|stdio.h|iostream|
|입력문|cin|cout|
|츨력문|printf|cout|

~~~
#include <iostream>

int main()
{
    int i, j;
    std::cout << "Enter num 1 :";
    std::cin >> i;

    std::cout << "Enter num 2 :";
    std::cin >> j;

    std::cout << "num1 + num2 = " << i+j << std::endl;

    return 0;
}
~~~

네임스페이스 : 소속을 지정해주는 역할, 이름이 충돌하는 것을 방지해 줌.<br>
std::는 std라는 네임스페이스에 접근할 때 쓰는 표현, cout, cin, string...등등이 포함되어 있다.

## 데이터 형식
void형은 어떤 변수라도 가르킬 수 있는 제네릭 포인터를 만들 때에도 사용 가능하다.

~~~
int int_value;
float float_value;
void *ptr;
ptr = &int_value;
ptr = &float_value;
~~~

부동 소수점 : 자료형의 크기는 정해져 있음, 특정 자리까지만 저장 가능하고 나머지는 유실된다. (기본 정밀도는 6자리)

~~~
float float_value = 9.87f;
double double_value = 9.87;
long double long_double_value = 9.87l;
~~~

## 변수의 유효 범위
1. 전역 변수와 이름이 같은 지역변수가 있으면 지역변수가 우선
2. 전역 변수 연산자 ::를 이용하면 접근 가능 
~~~
#include <iostream>
using namespace std;

int value = 1;

int main()
{
    int value = -1;
무제 폴더
    cout << value << endl; // 지역 변수
    cout << ::value << endl; //전역 변수
    
    return 0;
}
~~~

## 문자열 표현 방식
C++에서는 표준 라이브러리 형태인 string 클래스를 지원한다. char*나 char[]와 달리 문자열 끝에 \0이 포함되지 않아 **문자열의 길이를 동적으로** 변경이 가능하다.

~~~
#include <iostream>
#include <string>

using namespace std;

int main() {
  string string_value("Hello");
  cout << string_value << endl;

  string_value = "World!";
  cout << string_value << endl;

  return 0;
}
~~~

std::cin : 공백이 입력될 때까지 값을 입력 받는다.<br>
std::getline(std::cin, str) : 공백이 입력되더라도 값을 입력 받는다.

### 특정 원소 접근 방법
str.at(idx) : idx 위치 문자 반환, 범위 유용성 체크 O <br>
str[idx] : idx 위치 문자 반환, 범위 유용성 체크 X <br>
str.front() : 문자열의 가장 앞의 문자 반환 <br>
str.back() : 문자열의 가장 뒤의 문자 반환

사용자 정의 리터럴 : opeartor""의 사용

~~~
#include <iostream>

using namespace std;

const long double km_per_mile = 1.609344L;

// _km 사용자 리터럴 정의
long double operator"" _km(long double val) {
  return val; // km 리터럴: 아무 작업 없이  그대로 반환
}

// _mi 사용자 리터럴 정의
long double operator"" _mi(long double val) {
  return val * km_per_mile; // mi 리터럴: mile을 km로 변환하여 반환
}

int main() {
  long double distance_1 = 1.0_km;    // km는 그대로 저장
  long double distance_2 = 1.0_mi;    // mile은 km 단위로 변환되어 저장

  cout << "1.0 mile = " << distance_2 << " km" << endl; 
  cout << distance_1 + distance_2 << " km" << endl;   // km값으로 출력

  return 0;
~~~

## 포인터와 메모리
시작 메모리 주소는 프로그램을 실행할 때마다 매번 달라질 수 있다.<br>
메모리 주소는 실제 위치에 해당하는 가상 주소이다.

포인터 : 메모리의 주소값을 저장하는 변수, (=포인터 변수)<br>
& (주소 연산자) : 해당 변수의 주소값을 반환하는 연산자<br>
\* (참조 연산자) : 포인터가 가르키는 주소에 저장된 값을 반환하는 연산자

## 동적 메모리 할당
[동적 메모리 할당과 해제]

~~~
#include <iostream>
using namespace std;

int main()
{
    int *pt_int_val = new int;

    *pt_int_val = 100;
    cout << *pt_int_val << endl << pt_int_val << endl;

    delete pt_int_val;
    
    return 0;
}
~~~

[배열 형태의 동적 메모리 할당과 해제]

~~~
#include <iostream>
using namespace std;


int main()
{
    int *pt_arrval = new int[5];
    
    for (int i=0; i<5; i++)
    {
        *(pt_arrval + i) = i;
    }

    for (int i=0; i<5; i++)
    {
        cout << pt_arrval[i] << endl;
    }

    delete[] pt_arrval;

    return 0;
}
~~~

매개변수나 지역변수..등등의 대부분의 일반 변수<br>
: 스택 메모리에 할당, 함수의 호출과 함께 할당되며 **함수가 반환되면 자동으로 소멸**함 (메모리 해제를 관리할 필요 없음)

동적으로 할당된 변수<br>
: 힙 영역에 할당, 명시적으로 해제하기 전에는 **해당 프로그램이 종료될 때까지 계속 유지**됨. (메모리 해제를 하지 않으면 메모리 누수가 일어남)

포인터를 다룰 때 주의할 점
1. 포인터가 **유효한 메모리를 가리키는지 확인**해야 한다. 유효하지 않은 메모리를 가리키는 포인터를 역참조하려고 하면 세그멘테이션 실패, 런타임 오류가 뜬다.
2. 할당된 메모리의 범위를 벗어나는 포인터 연산은 피해야 한다.

## 구조체

~~~
struct Person
{
  std::string name;
  int age;
  float height;
  float weight;
};

int main()
{
  Person adult[2] = 
  {
    {"Steve", 24, 180, 70},
    {"Alex", 23, 160, 50}
  };
}
~~~

## 정적 변수와 상수 변수
static 키워드는 지역 변수를 **정적 변수**로 바꾸어준다. 정적 변수는 선언된 블록이 끝나더라도 값을 유지한다는 특성을 가진다.

정적 변수는 해당 함수가 처음 호출될 때 **한 번만 초기화** 되며, 그 값은 프로그램이 종료할 때까지 지속된다.

~~~
#include <iostream>
using namespace std;

void func()
{
    int a = 10;
    static int b = 10; #b의 값은 11, 12, 13으로 계속 늘어나게 된다.

    a++;
    b++;

    cout << a << '\t' << b << endl;
}

int main()
{
    for (int i=0 ; i<5; i++)
    {
        func();
        func();
        func(); 
    }
}
~~~

static으로 선언된 정적 변수는 **데이터 영역**에 할당된다. 데이터 영역은 프로그램이 시작할 때 할당되며 종료할 때 해제된다

const 변수 : 변수를 상수화, 변수는 반드시 초기화해야 한다.

~~~
int a = 0;
int b = 1;
const int *ptr = &a;
int *const ptr2 = &a;


*ptr = 2; // 포인터 변수가 가르키는 값을 상수화, 컴퍄일 에러 발생
ptr = &b; // 포인터 변수 자체를 상수화, 컴파일 에러 발생
~~~

레퍼런스 변수 : 변수에 또 다른 이름, 별칭을 부여

~~~
자료형 &레퍼런스_변수_이름 = 대상_변수_이름;
int &ref_a = a; // ref_a는 a를 참조한다.
~~~

레퍼런스 변수 ref_a와 a는 서로 같은 주소 값을 가진다 

C++에서 참조자는 주로 **함수에 인수를 전달**할 때 사용된다.

~~~
int main(void)
{
    int num1 = 3, num2 = 7;
    cout << "변경 전 num1의 값은 " << num1 << "이며, num2의 값은 " << num2 << "입니다." << endl;
    Swap(num1, num2);
    cout << "변경 후 num1의 값은 " << num1 << "이며, num2의 값은 " << num2 << "입니다." << endl;
    return 0;
}

void Swap(int& x, int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
~~~

주의사항
1. 레퍼런스 변수는 선언 이후 반드시 참조할 원본 변수를 지정할 것
2. 참조할 대상이 지정된 레퍼런스 변수는 다른 변수를 참조하도록 변경이 불가능
3. 레퍼런스 변수는 상수를 참조할 수 없다

## 실행 흐름 제어
switch문 : 일치하는 레이블이 없으면 기본적으로 default 구문을 실행한다.

## 예외 처리
try : 예외가 발생할 수 있는 코드 블록을 중괄호 {}로 감싸 준다.<br>
throw : 예외를 catch 블록으로 던진다.<br>
catch: throw로 던진 예외를 받아서 처리한다.

throw문이 실행되면 try문의 남은 코드를 실행하지 않고 try문을 빠져나와 바로 catch 문으로 가게 된다.

catch(...)문 : 명시하지 않은 나머지 모든 예외를 받아서 처리할 때 사용한다.

~~~
#include <iostream>

using namespace std;

int main() {
  try {
    int input;
    cout << "정수 중 하나를 입력해보세요 : ";
    cin >> input;

    // 입력받은 숫자가 양수이면
    if (input > 0) {
      cout << "throw 1" << endl;
      throw 1;   // 예외 1 발생(정수 형식 예외)
    }

    // 입력받은 숫자가 음수이면
    if (input < 0) {
      cout << "throw -1.0f" << endl;
      throw - 1.0f;   // 예외 1.0f 발생(부동소수점 형식 예외)
    }

    // 입력받은 숫자가 0이면
    if (input == 0) {
      cout << "throw Z" << endl;
      throw 'Z';   // 예외 Z 발생 (문자 형식 예외)
    }
  }
  catch (int a) {   // 정수 형식 예외 받기
    cout << "catch " << a << endl;
  }
  catch (float a){
    cout << "catch " << a << endl;
  }
  catch (...) {   // 처리되지 않은 나머지 예외 모두 받기
    cout << "catch all" << endl;
  }

  return 0;
}
~~~

스택 풀기 : 함수에서 발생한 예외 처리의 책임은 throw가 발생한 함수를 호출한 쪽으로 넘어간다.

어설션 : 예상치 못한 상황에서 프로그램 동작을 중단시키는 도구

## 함수 템플릿(template)
C++에서 함수 탬플릿은 함수의 일반화된 선언을 의미. 같은 알고리즘을 기반으로 하면서, 서로 다른 타입에서 동작하는 함수를 한 번에 정의할 수 있다.

~~~
template <typename T>
void Swap(T& a, T& b);
~~~

**명시적 특수화** : 특정 타입에 대한 특별한 동작을 정의

[EX] double형을 위한 명시적 특수화

~~~
template <> void Swap<double>(double&, double&) { ... };
~~~

## 클래스 탬플릿
클래스의 일반화된 선언

~~~
#include <iostream>
using namespace std;

template <typename T>
class Data
{
private:
	T data_;
public:
	Data(T dt);
	T get_data();
};

int main(void)
{
	Data<string> str_data("C++ 수업");
	Data<int> int_data(12);
	
	cout << "str_data : " << str_data.get_data() << endl;	
	cout << "int_data : " << int_data.get_data() << endl;
	return 0;
}

template <typename T>
Data<T>::Data(T dt)
{
	data_ = dt;
}

template <typename T>
T Data<T>::get_data()
{
	return data_;
}
~~~