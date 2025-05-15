// ex5-7.c
// 중첩 if문 사용 예 1

#include <stdio.h>

int main()
{
    int a = 75;

    if (a > 50)
    {
        if (a < 100)
        {
            printf("50보다 크고 100보다 작군요.. \n");
        }
        else
        {
            printf("와~~ 100보다 크군요.. \n");
        }
    }
    else
    {
        printf("에게~ 50보다 작군요.. \n");
    }
}