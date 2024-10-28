#include <stdio.h>
#include <stdlib.h>

#define True 1

void swap(int **arr_a, int **arr_b, int *size_a, int *size_b)
{
    int temp, old_size;

    if (*size_a > *size_b)
    {
        old_size = *size_b;
        *size_b = *size_a;
        int *new_b = (int*)realloc(*arr_b, sizeof(int)* *size_b);

        *arr_b = new_b;

        for (int i=old_size; i<*size_b; i++)
        {
            (*arr_b)[i] = 0;
        }
    }
    else
    {
        old_size = *size_a;
        *size_a = *size_b;
        int *new_a = (int*)realloc(*arr_a, sizeof(int)* *size_a);

        *arr_a = new_a;

        for (int i=old_size; i<*size_a; i++)
        {
            (*arr_a)[i] = 0;
        }
    }

    for (int i=0; i<*size_a; i++)
        {
            temp = (*arr_a)[i];
            (*arr_a)[i] = (*arr_b)[i];
            (*arr_b)[i] = temp;
        }
}

int main()
{
    int size_a;
    int size_b;

    int *arr_a = NULL;
    int *arr_b = NULL;

    while(True)
    {
        printf("두 배열의 크기를 입력하세요. : ");
        scanf("%d %d", &size_a, &size_b);

        if (size_a == 0 || size_b == 0)
        {
            printf("배열의 크기는 0이 될 수 없습니다.\n");
            continue;
        }

        arr_a = (int*)malloc(sizeof(int) * size_a);
        arr_b = (int*)malloc(sizeof(int) * size_b);

        printf("배열 A를 입력하세요 : ");
        
        for (int i=0; i<size_a; i++)
        {
            scanf("%d", &arr_a[i]);
        }

        printf("배열 B를 입력하세요 : ");

        for (int i=0; i<size_b; i++)
        {
            scanf("%d", &arr_b[i]);
        }

        break;   
    }

    swap(&arr_a, &arr_b, &size_a, &size_b);

    printf("=== SWAP 이후의 배열 ===\n");

    for (int i=0; i< size_a; i++)
    {
        printf("%d ", *(arr_a + i));
    }

    printf("\n");

    for (int i=0; i< size_b; i++)
    {
        printf("%d ", *(arr_b + i));
    }

    printf("\n");
}