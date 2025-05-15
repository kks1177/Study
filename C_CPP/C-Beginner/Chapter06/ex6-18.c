// ex6-18.c
// for문의 다양한 활용 예 3

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a = 0, b = 0;

    for (;;)
    {
        printf("더할 두 수 입력 (멈추려면 Ctrl+C) : ");
        scanf("%d %d", &a, &b);

        printf("%d + %d = %d \n", a, b, a + b);
    }
}