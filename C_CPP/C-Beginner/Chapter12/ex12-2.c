// ex12-2.c
// 고정된 크기의 배열로 인한 메모리 낭비의 예

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int aa[10000] = {0};
    int *p;
    int i = 0, hap = 0, cnt = 0;

    printf(" 입력할 개수는 ? ");
    scanf("%d", &cnt);

    for (i = 0; i < cnt; i++)
    {
        printf(" %d번째 숫자 : ", i + 1);
        scanf("%d", aa);
    }
    p = aa;

    for (i = 0; i < cnt; i++)
        hap += *(p + i);

    printf("입력 숫자의 합 ==> %d \n", hap);
}