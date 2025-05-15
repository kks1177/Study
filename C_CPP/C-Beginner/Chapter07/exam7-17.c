// exam7-17.c
// 배수의 합계를 구하는 계산기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int start = 0, end = 0;
    int basu = 0, i = 0, hap = 0;

    printf("합계의 시작값 ==> ");
    scanf("%d", &start);

    printf("합계의 끝값 ==> ");
    scanf("%d", &end);

    printf("배수 ==> ");
    scanf("%d", &basu);

    i = start;

    while (i <= end)
    {
        if (i % basu == 0)
            hap += i;
        i++;
    }
    printf("%d부터 %d까지의 %d배수의 합계 ==> %d \n", start, end, basu, hap);
}