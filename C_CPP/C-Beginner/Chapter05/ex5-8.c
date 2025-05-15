// ex5-8.c
// 중첩 if문 사용 예 2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a = 0;

    printf("점수 입력 : ");
    scanf("%d", &a);

    if (a >= 90)
        printf("A");
    else
    {
        if (a >= 80)
            printf("B");
        else
        {
            if (a >= 70)
                printf("C");
            else
            {
                if (a >= 60)
                    printf("D");
                else
                    printf("F");
            }
        }
    }
}