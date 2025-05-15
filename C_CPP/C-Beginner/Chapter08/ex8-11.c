// ex8-11.c
// 문자열 처리 함수 strcat() 사용 예

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main()
{
    char ss[7] = "XYZ";

    strcat(ss, "ABC");

    printf("이어진 문자열 ss의 내용 ==> %s \n", ss);
}