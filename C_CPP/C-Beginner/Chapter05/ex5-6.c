// ex5-6.c
// 블록을 활용한 if~else문 사용 예

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a;

    printf("정수 입력 : ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("짝수 입력됨.. \n");
    }
    else
    {
        printf("홀수 입력됨.. \n");
    }
}