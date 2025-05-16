// exam10-29.c
// 숫자 자동 추첨 프로그램

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getNumber()
{
    return rand() % 45 + 1;
}

int main()
{
    short int lotto[6] = {
        0,
    };
    int i = 0, k = 0, num = 0;
    char dup = 'N';

    printf("** 로또 추첨을 시작합니다. ** \n\n");
    srand((unsigned)time(NULL));

    for (i = 0; i < 6;)
    {
        num = getNumber();

        for (k = 0; k < 6; k++)
        {
            if (lotto[k] == num)
                dup = 'Y';
        }
        if (dup == 'N')
            lotto[i++] = num;
        else
            dup = 'N';
    }
    printf("추첨된 로또 번호 ==> ");
    for (i = 0; i < 6; i++)
        printf("%d  ", lotto[i]);
    printf("\n\n");
}