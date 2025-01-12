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