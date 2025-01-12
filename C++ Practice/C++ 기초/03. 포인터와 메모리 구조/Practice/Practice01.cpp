#include <iostream>

using namespace std;

int main()
{
    int *ptr = new int[5];
    for (int i=0; i<5; i++)
    {
        *(ptr + i) = i+1;
    }
    
    for (int i=0; i<5; i++)
    {
        cout << *(ptr + i) << ' ';
    }

    cout << endl;

    delete[] ptr;
}