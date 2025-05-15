// ex6-12.c
// for문을 사용한 구구단 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int i = 0, dan = 0;

    printf("몇 단 : ");
    scanf("%d", &dan);

    for (i = 1; i <= 9; i++)
    {
        printf("%d X %d = %d \n", dan, i, dan * i);
    }
}