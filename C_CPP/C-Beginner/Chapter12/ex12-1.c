// ex12-1.c
// 포인터를 사용하여 정수 합계를 구하는 예

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int aa[3] = {0};
    int *p;
    int i = 0, hap = 0;

    for (i = 0; i < 3; i++)
    {
        printf(" %번째 숫자 : ", i + 1);
        scanf("%d", aa);
    }
    p = aa;

    for (i = 0; i < 3; i++)
        hap += i;

    printf("입력 숫자의 합 ==> %d \n", hap);
}