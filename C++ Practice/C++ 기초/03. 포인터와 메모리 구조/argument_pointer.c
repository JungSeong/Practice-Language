#include <stdio.h>
#define N 3

struct Person
{
    char name[7], gender[3];
    int age;
};

int main()
{
    int i;
    struct Person user[N] = 
    {
        {"������", "��"},
        {"������", "��"},
        {"������", "��"}
    };

    struct Person *ptr = user;

    for (i=0; i<N; i++)
    {
        printf("%s�� ���̴�?", (*ptr).name);
        scanf("%d", &(*ptr).age);

        ptr++;
    }

    ptr = user;
    for (int i=0; i<N; i++)
    {
        printf("%s\t %s\t %d\n", ptr->name, ptr->gender, ptr->age);
        ptr++;
    }

    return 0;
}