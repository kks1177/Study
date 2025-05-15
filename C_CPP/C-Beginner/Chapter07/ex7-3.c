// ex7-3.c
// while문으로 무한 루프 만들기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a = 0, b = 0;

    while (1)
    {
        printf("더할 두 수 입력 (멈추려면 Ctrl+C) : ");
        scanf("%d %d", &a, &b);

        printf("%d + %d = %d \n", a, b, a + b);
    }
}