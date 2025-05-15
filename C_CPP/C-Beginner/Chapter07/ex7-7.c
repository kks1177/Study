// ex7-7.c
// break문 사용 예 1

#include <stdio.h>

int main()
{
    int i = 0;

    for (i = 1; i <= 100; i++)
    {
        printf("for문을 %d회 실행하였습니다. \n", i);
        break;
    }
    printf("for문을 종료했습니다. \n");
}