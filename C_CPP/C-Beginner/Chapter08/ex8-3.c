// ex8-3.c
// for문으로 배열의 첨자를 활용하는 예

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int aa[4] = {0};
    int hap = 0, i = 0;

    for (i = 0; i <= 3; i++)
    {
        printf("%d번째 숫자 입력 : ", i + 1);
        scanf("%d", &aa[i]);
    }
    hap = aa + aa[1] + aa[2] + aa[3];

    printf(" 합계 ==> %d \n", hap);
}