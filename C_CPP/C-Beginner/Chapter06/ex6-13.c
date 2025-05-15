// ex6-13.c
// 중첩 for문 사용 예 1

#include <stdio.h>

int main()
{
    int i = 0, k = 0;

    for (i = 0; i < 3; i++)
    {
        for (k = 0; i < 2; k++)
        {
            printf("중첩 for문 (i값:%d, k값:%d)\n", i, k);
        }
    }
}