// exam8-20.c
// 입력된 문자열을 반대 순서로 출력

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main()
{
    char ss[100] = {0}, tt[100] = {0};
    int count = 0, i = 0;

    printf("문자열 입력 : ");
    scanf("%s", ss);

    count = strlen(ss);

    for (i = 0; i < count; i++)
        tt[i] = ss[count - (i + 1)];
    tt[count] = '\0';

    printf("내용을 거꾸로 출력 ==> %s \n", tt);
}