#include <iostream>

using namespace std;

class bank
{
    private:
        int safe;

    public:
        bank();
        void use_counter(int in, int out);
};

bank::bank()
{
    safe += 1000;
    cout << "최초 금고 : " << safe << endl;
    cout << endl;
}

void bank::use_counter(int in, int out)
{
    safe += in;
    safe -= out;

    cout << "입금 : " << in << endl;
    cout << "출금 : " << out << endl;
    cout << "금고 : " << safe << endl;
    cout << endl;
}

int main()
{
    bank my_bank;

    my_bank.use_counter(0, 20);
    my_bank.use_counter(50, 0);
    my_bank.use_counter(100, 50);

    return 0;
}