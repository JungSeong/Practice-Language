#include <stdio.h>

#define M 2
#define U 2

struct Monster
{
    char name[10];
    int health;
    int attack;
};

struct User
{
    char name[10];
    int health;
    int attack;
};

int main()
{
    struct Monster monster[M];
    struct User user[U];

    int monster_death_cnt, user_death_cnt;
    int monster_idx = 0, user_idx = 0;

    for (int i=0; i<M; i++)
    {
        printf("Monster %d의 name, health, attack : ", i);
        scanf("%s %d %d", monster[i].name, &monster[i].health, &monster[i].attack);
    }

    for (int i=0; i<M; i++)
    {
        printf("User %d의 name, health, attack : ", i);
        scanf("%s %d %d", user[i].name, &user[i].health, &user[i].attack);
    }

    while(monster_death_cnt < M && user_death_cnt < U)
    {
        monster[monster_idx].health = monster[monster_idx].health - user[user_idx].attack;
        user[user_idx].health = user[user_idx].health - monster[monster_idx].attack;

        if (monster[monster_idx].health <= 0)
        {
            printf("%s이(가) 쓰러졌습니다!\n", monster[monster_idx].name);
            monster_idx++;
            monster_death_cnt++;
        }
        if (user[user_idx].health <= 0)
        {
            printf("%s이(가) 쓰러졌습니다!\n", user[user_idx].name);
            user_idx++;
            user_death_cnt++;
        }
    }

    if (monster_death_cnt == M && user_death_cnt != U)
    {
        printf("유저 팀이 승리했습니다!\n");
    }

    if (monster_death_cnt != M && user_death_cnt == U)
    {
        printf("몬스터 팀이 승리했습니다!\n");
    }
    if (monster_death_cnt == M && user_death_cnt == U)
    {
        printf("비겼습니다!\n");
    }
}