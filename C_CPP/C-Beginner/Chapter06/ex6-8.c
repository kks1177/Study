// ex6-8.c
// for문을 활용하여 합계 구하기 2

#include <stdio.h>

int main()
{
    int hap = 0, i = 0;

    for (i = 1; i <= 10; i++)
    {
        hap += i;
    }
    printf("1~10까지의 합 : %d \n", hap);
}