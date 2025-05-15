// ex6-10.c
// for문을 활용하여 합계 구하기 4

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int hap = 0, i = 0, num = 0;

    printf("값 입력 : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        hap += i;
    }
    printf("1~%d까지의 합 : %d \n", num, hap);
}