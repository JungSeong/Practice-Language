#include <iostream>

using namespace std;

int main() {
    int month, date;

    try {
        cout << "���� �Է��ϼ���: ";
        cin >> month;

        switch(month)
        {
            case 1 : 
            case 2 :
            case 3 :
                cout << "��" << endl;
                break;
            case 4 :
            case 5 :
            case 6 :
                cout << "����" << endl;
                break;
            case 7 :
            case 8 :
            case 9 :
                cout << "����" << endl;
                break;
            case 10 :
            case 11 :
            case 12 :
                cout << "�ܿ�" << endl;
                break;
            default : 
                throw month;
        }

        cout << "���� �Է��ϼ���: ";
        cin >> date;

        if (date < 0 || date >31)
        {
            throw out_of_range("���� 1���� 31������ �������� �մϴ�.");
        }
    }

    catch (int err)
    {
        cout << "�߸��� �Է��Դϴ� : " << err << endl;
    }
}