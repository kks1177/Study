// ex8-12.c
// 문자열 처리 함수 strcmp() 사용 예

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main()
{
    char ss[] = "XYZ";
    char tt[] = "xyz";
    int r = 0;

    r = strcmp(ss, tt);

    printf("두 문자열의 비교결과 ==> %d \n", r);
}