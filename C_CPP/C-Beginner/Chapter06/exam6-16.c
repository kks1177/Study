// exam6-16.c
// 입력된 문자를 반대 순서로 출력

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main()
{
    char str[100] = 0;
    int str_cnt = 0, i = 0;

    printf("영문자 및 숫자 입력 (100자 이하) : ");
    scanf("%s", str);

    printf("\n");
    printf("입력한 문자열 ==> %s\n", str);
    printf("변환된 문자열 ==>");

    str_cnt = strlen(str);

    for (i = str_cnt; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}