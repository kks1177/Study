// exam10-27.c
// 함수를 이용한 구구단 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void gugu(int dan)
{
    int i = 0;

    for (i = 1; i <= 9; i++)
        printf("%2d X %2d = %2d \n", dan, i, dan * i);
}

int main()
{
    int input = 0;

    printf("출력하고 싶은 단을 입력 : ");
    scanf("%d", &input);

    gugu(input);
}