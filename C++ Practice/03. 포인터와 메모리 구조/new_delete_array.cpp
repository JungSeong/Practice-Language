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