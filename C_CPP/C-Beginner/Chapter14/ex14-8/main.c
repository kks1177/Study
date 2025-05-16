// main.c
// extern 예약어 사용 예 2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exchange();

int a = 0, b = 0;

int main()
{
    printf("a 값 입력 : ");
    scanf("%d", &a);

    printf("b 값 입력 : ");
    scanf("%d", &b);

    exchange();

    printf("\n바뀐 값 a는 %d, b는 %d \n", a, b);
}