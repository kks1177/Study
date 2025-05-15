// exam6-15.c
// 아스키코드표 출력 프로그램

#include <stdio.h>

int main()
{
    int i = 0;

    for (i = 0; i < 128; i++)
    {
        if (i % 16 == 0)
        {
            printf("-----------\n");
            printf("10진수  16진수  문자 \n");
            printf("-----------\n");
        }
        printf("%5d %5dx    %5c\n", i, i, i);
    }
}