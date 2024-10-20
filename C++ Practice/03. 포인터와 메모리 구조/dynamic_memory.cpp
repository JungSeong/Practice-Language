#include <iostream>
#include <string>

using namespace std;

void change_negative(int *_val)
{
    if (*_val > 0)
    {
        *_val = -(*_val);
    }
}

int main()
{
    int a = 3, b = -3;

    cout << a << endl << b << endl;

    change_negative(&a);
    change_negative(&b);

    cout << a << endl << b << endl;
}