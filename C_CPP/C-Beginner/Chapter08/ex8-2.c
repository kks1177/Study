// ex8-2.c
// 배열에 값을 선언하여 출력하는 예

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int aa[4] = {0};
    int hap = 0;

    printf("1번째 숫자 입력 : ");
    scanf("%d", aa);

    printf("2번째 숫자 입력 : ");
    scanf("%d", aa[1]);

    printf("3번째 숫자 입력 : ");
    scanf("%d", aa[2]);

    printf("4번째 숫자 입력 : ");
    scanf("%d", aa[3]);

    hap = aa + aa[1] + aa[2] + aa[3];

    printf(" 합계 ==> %d \n", hap);
}