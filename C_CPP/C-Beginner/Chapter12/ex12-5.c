// ex12-5.c
// realloc() 함수 사용 예

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main()
{
    int *p;
    int i = 0, hap = 0, cnt = 0, data = 0;

    p = (int *)malloc(sizeof(int) * 1);
    printf(" 1번째 숫자 : ");
    scanf("%d", p);
    cnt++;

    for (i = 2;; i++)
    {
        printf(" %d번째 숫자 : ", i);
        scanf("%d", &data);

        if (data != 0)
            p = (int *)realloc(p, sizeof(int) * i);
        else
            break;

        p[i - 1] = data;
        cnt++;
    }

    for (i = 0; i < cnt; i++)
        hap += p[i];
    printf("입력 숫자 합 ==> %d \n", hap);

    free(p);
}