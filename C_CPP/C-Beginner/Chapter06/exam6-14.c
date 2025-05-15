// exam6-14.c
// 구구단 출력 프로그램

#include <stdio.h>

int main()
{
    int i = 0, k = 0;

    for (i = 2; i <= 9; i++)
    {
        printf("#제%d단#", i);
    }
    printf("\n\n");

    for (i = 1; i <= 9; i++)
    {
        for (k = 2; k <= 9; k++)
        {
            printf("%2dX%2d=%2d", k, i, k * i);
        }
        printf("\n");
    }
}