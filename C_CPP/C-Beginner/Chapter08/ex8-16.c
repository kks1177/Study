// ex8-16.c
// 2차원 배열의 초기화 예

#include <stdio.h>

int main()
{
    int aa[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int i = 0, k = 0;
    printf("aa[0][0]부터 aa[2][3]까지 출력 \n");

    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 4; k++)
        {
            printf("%3d", aa[i][k]);
        }
        printf("\n");
    }
}