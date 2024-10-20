#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "어떤 정수를 입력 : " ;
    cin >> input;

    if (input >= 0)
    {
        cout << "양수입니다." << endl;
    }
    else
    {
        cout << "음수입니다." << endl;
    }
}
