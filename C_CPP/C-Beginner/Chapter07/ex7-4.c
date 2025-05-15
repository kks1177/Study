// ex7-4.c
// 무한 루프를 활용한 계산기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    char ch = 'a';

    while (1)
    {
        printf("계산할 두 수 입력 (멈추려면 Ctrl+C) : ");
        scanf("%d %d", &a, &b);

        printf("계산할 연산자 입력 : ");
        scanf(" %c", &ch);

        switch (ch)
        {
        case '+':
            printf("%d + %d = %d 입니다. \n", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d 입니다. \n", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d 입니다. \n", a, b, a * b);
            break;
        case '/':
            printf("%d / %d = %d 입니다. \n", a, b, a / b);
            break;
        case '%':
            printf("%d % %d = %d 입니다. \n", a, b, a % b);
            break;
        default:
            printf("연산자를 잘못 입력했습니다. \n");
        }
    }
}