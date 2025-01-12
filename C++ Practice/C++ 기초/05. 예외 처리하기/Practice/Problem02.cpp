#include <iostream>

using namespace std;

void process(int value)
{
    try{

        if (value < 0){
            throw value;
        }

        cout << "processed : " << value << endl;
    }

    catch (int value) {
        cout << value << endl;
    }
}

int main()
{
    process(10);
    process(-5);

    return 0;
}