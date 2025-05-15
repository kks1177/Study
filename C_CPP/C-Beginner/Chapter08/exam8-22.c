// exam8-22.c
// 구구단의 결과를 2차원 배열에 저장

#include <stdio.h>

int main()
{
    int gugu[9][9] = {0};
    int i = 0, k = 0;

    for (i = 0; i < 9; i++)
        for (k = 0; k < 9; k++)
            gugu[i][k] = (i + 1) * (k + 1);

    for (i = 0; i < 9; i++)
        for (k = 0; k < 9; k++)
            printf("%dX%d=%2D  ", k + 1, i + 1, gugu[i][k]);
    printf("\n");
}