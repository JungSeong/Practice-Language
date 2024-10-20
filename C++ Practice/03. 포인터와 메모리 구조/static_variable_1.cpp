#include <iostream>
using namespace std;

void func()
{
    int a = 10;
    static int b = 10;

    a++;
    b++;

    cout << a << '\t' << b << endl;
}

int main()
{
    for (int i=0 ; i<5; i++)
    {
        func();
    }
}