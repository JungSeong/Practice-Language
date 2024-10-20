#include <iostream>
#include <cassert>

using namespace std;

void divide(int a, int b) {
    assert(b != 0);
    cout << "divided : " << a/b << endl;
}

int main() {
    divide(10, 2);
    divide(5, 0);
    return 0;
}