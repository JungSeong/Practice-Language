#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "1~7 �� �ϳ��� �Է� : " << endl;
    cin >> num;

    switch(num)
    {
        case 1 :
            cout << "������" << endl;
            break;
        case 2 :
            cout << "ȭ����" << endl;
            break;
        case 3 :
            cout << "������" << endl;
            break;
        case 4 :
            cout << "�����" << endl;
            break;
        case 5 :
            cout << "�ݿ���" << endl;
            break;
        case 6 :
            cout << "�����" << endl;
            break;
        case 7 :
            cout << "�����" << endl;
            break;
        default :
            cout << "error" << endl;
            break;
    }
}
