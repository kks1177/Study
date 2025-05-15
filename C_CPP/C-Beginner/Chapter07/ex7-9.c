// ex7-9.c
// break문 사용 예 3

#include <stdio.h>

int main()
{
    int hap = 0, i = 0;

    for (i = 1; i <= 100; i++)
    {
        hap += i;

        if (hap >= 1000)
            break;
    }
    printf("1~100의 합에서 최초로 1000이 넘는 위치는? : %d \n", i);
}