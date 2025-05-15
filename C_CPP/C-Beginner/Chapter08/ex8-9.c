// ex8-9.c
// 문자열 처리 함수 strlen() 사용 예

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main()
{
    char ss[] = "XYZ";
    int len = 0;

    len = strlen(ss);

    printf("문자열 \%s\"의 길이 ==> %d \n", ss, len);
}