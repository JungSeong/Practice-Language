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
        {"나태희", "여"},
        {"유현빈", "남"},
        {"나원빈", "남"}
    };

    struct Person *ptr = user;

    for (i=0; i<N; i++)
    {
        printf("%s의 나이는?", (*ptr).name);
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