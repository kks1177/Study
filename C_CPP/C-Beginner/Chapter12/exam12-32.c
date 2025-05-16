// exam12-32.c
// 여러 숫자 중 짝수만 더하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main()
{
    int *p;
    int i = 0, hap = 0, cnt = 0;

    printf(" 입력할 개수는 ? ");
    scanf("%d", &cnt);
    p = (int *)malloc(sizeof(int) * cnt);

    for (i = 0; i < cnt; i++)
    {
        printf(" %d번째 숫자 : ", i + 1);
        scanf("%d", p + i);
    }

    for (i = 0; i < cnt; i++)
    {
        if (p[i] % 2 == 0)
            hap += p[i];
    }

    printf("입력한 짝수합 ==> %d \n", hap);

    free(p);
}