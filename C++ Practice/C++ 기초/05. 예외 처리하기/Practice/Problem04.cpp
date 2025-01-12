#include <iostream>

using namespace std;

int main() {
    int month, date;

    try {
        cout << "월을 입력하세요: ";
        cin >> month;

        switch(month)
        {
            case 1 : 
            case 2 :
            case 3 :
                cout << "봄" << endl;
                break;
            case 4 :
            case 5 :
            case 6 :
                cout << "여름" << endl;
                break;
            case 7 :
            case 8 :
            case 9 :
                cout << "가을" << endl;
                break;
            case 10 :
            case 11 :
            case 12 :
                cout << "겨울" << endl;
                break;
            default : 
                throw month;
        }

        cout << "일을 입력하세요: ";
        cin >> date;

        if (date < 0 || date >31)
        {
            throw out_of_range("일은 1부터 31까지의 정수여야 합니다.");
        }
    }

    catch (int err)
    {
        cout << "잘못된 입력입니다 : " << err << endl;
    }
}