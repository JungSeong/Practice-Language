#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "1~7 중 하나를 입력 : " << endl;
    cin >> num;

    switch(num)
    {
        case 1 :
            cout << "월요일" << endl;
            break;
        case 2 :
            cout << "화요일" << endl;
            break;
        case 3 :
            cout << "수요일" << endl;
            break;
        case 4 :
            cout << "목요일" << endl;
            break;
        case 5 :
            cout << "금요일" << endl;
            break;
        case 6 :
            cout << "토요일" << endl;
            break;
        case 7 :
            cout << "토요일" << endl;
            break;
        default :
            cout << "error" << endl;
            break;
    }
}
