#include <iostream>

using namespace std;

int main()
{
    try {
        int divisor = 0;
        
        if (divisor == 0)
        {
            throw divisor;  
        }

        int result = 10 / divisor;
        cout << "°á°ú : " << result << endl;
        return 0;
    }

    catch (float a)
    {
        cout << "throw " << a << endl;
    }
}

