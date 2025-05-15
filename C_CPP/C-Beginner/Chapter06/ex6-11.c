// ex6-11.c
// for문을 활용하여 합계 구하기 5

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int hap = 0, i = 0;
    int num1 = 0, num2 = 0, num3 = 0;

    printf(" 시작값, 끝값, 증가값 입력 : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    for (i = num1; i <= num2; i += num3)
    {
        hap += i;
    }
    printf("%d에서 %d까지 %d씩 증가한 값의 합 : %d \n", num1, num2, num3, hap);
}