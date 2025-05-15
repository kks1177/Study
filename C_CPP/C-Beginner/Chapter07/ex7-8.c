// ex7-8.c
// break문 사용 예 2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a = 0, b = 0;

    while (1)
    {
        printf("더할 두 수 입력 (멈추려면 0 입력) : ");
        scanf("%d %d", &a, &b);

        if (a == 0)
            break;

        printf("%d + %d = %d \n", a, b, a + b);
    }
    printf("0을 입력해서 for문 탈출! \n");
}