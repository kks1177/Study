// ex8-10.c
// 문자열 처리 함수 strcpy() 사용 예

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main()
{
    char ss[4] = {0};

    strcpy(ss, "XYZ");

    printf("문자열 ss의 내용 ==> %s \n", ss);
}