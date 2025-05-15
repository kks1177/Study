// ex8-7.c
// 문자열을 선언하고 출력하는 예

#include <stdio.h>

int main()
{
    char ss[8] = "Basic-C";
    int i = 0;

    ss[5] = '#';

    for (i = 0; i < 8; i++)
        printf("ss[%d] ==> %c \n", i, ss[i]);

    printf("문자열 배열 ss ==> %s \n", ss);
}