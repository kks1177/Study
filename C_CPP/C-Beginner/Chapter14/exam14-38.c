// exam14-38.c
// static 예약어를 활용한 구구단 출력

#include <stdio.h>

void gugu()
{
    static int dan = 1;
    int i = 0;

    dan++;

    printf("\n\n ** %d 단 ** \n", dan);
    for (i = 1; i <= 9; i++)
        printf("%2d X %2d = %2d \n", dan, i, dan * i);
}

int main()
{
    int i = 0;

    for (i = 0; i < 8; i++)
        gugu();
}