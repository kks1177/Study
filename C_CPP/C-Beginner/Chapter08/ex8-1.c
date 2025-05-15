// ex8-1.c
// 변숫값 여러 개를 선언하여 출력하는 예

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    int hap = 0;

    printf("1번째 숫자 입력 : ");
    scanf("%d", &a);

    printf("2번째 숫자 입력 : ");
    scanf("%d", &b);

    printf("3번째 숫자 입력 : ");
    scanf("%d", &c);

    printf("4번째 숫자 입력 : ");
    scanf("%d", &d);

    hap = a + b + c + d;

    printf(" 합계 ==> %d \n", hap);
}