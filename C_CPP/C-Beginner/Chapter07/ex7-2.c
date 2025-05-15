// ex7-2.c
// for문을 while문으로 바꾸는 예 2

#include <stdio.h>

int main()
{
    int hap = 0, i = 0;

    i = 1;
    while (i <= 10)
    {
        hap += i;
        i++;
    }
    printf("1~10까지의 합 : %d \n", hap);
}