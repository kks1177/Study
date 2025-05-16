// ex12-3.c
// malloc() 함수 사용 예

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
        printf(" %번째 숫자 : ", i + 1);
        scanf("%d", p + i);
    }

    for (i = 0; i < cnt; i++)
        hap += *(p + i);

    printf("입력 숫자 합 ==> %d \n", hap);

    free(p);
}