// ex6-15.c
// 중첩 for문 사용 예 3

#include <stdio.h>

int main()
{
    int i = 0, k = 0;

    for (i = 1; i <= 9; i++)
    {
        for (k = 2; k <= 9; k++)
        {
            printf("%2dX%2d=%2d", k, i, k * i);
        }
        printf("\n");
    }
}