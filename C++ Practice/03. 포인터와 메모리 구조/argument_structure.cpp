#include <iostream>
using namespace std;

struct Person
{
    std::string name;
    int age;
    float height;
    float weight;
};

void check_age(Person *_adult, int _count)
{
    for (int i=0; i<_count; i++)
    {
        if (_adult[i].age >= 25)
        {
            cout << _adult[i].name << endl << _adult[i].age << endl << _adult[i].height
            << endl << _adult[i].weight << endl;
        }
    }
}

int main()
{
    Person adult[2] =
    {
        {"Brain", 26, 180, 70},
        {"Alex", 22, 165, 55},
    };

    check_age(adult, 2);

    cout << sizeof(Person) << endl;
    cout << adult << endl;
    cout << adult + 1 << endl;
}