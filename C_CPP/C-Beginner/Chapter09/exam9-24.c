// exam9-24.c
// 포인터를 이용하여 문자열을 반대 순서로 출력

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main()
{
    char ss[100] = {0};
    int count = 0, i = 0;
    char *p;

    printf("문자열 입력 : ");
    scanf("%s", ss);

    count = strlen(ss);

    p = ss;

    printf("내용 거꾸로 출력 ==> ");
    for (i = 0; i < count; i++)
        printf("%c", *(p + count - (i + 1)));
    printf("\n");
}