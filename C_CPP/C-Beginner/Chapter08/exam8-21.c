// exam8-21.c
// 대문자와 소문자 변환

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main()
{
    char in[50] = {0}, out[50] = {0};
    int i = 0, len = 0;
    int diff = 'a' - 'A';

    printf(" 문자 입력 : ");
    gets(in);

    len = strlen(in);

    for (i = 0; i < len; i++)
    {
        if (('A' <= in[i]) && (in[i] <= 'Z'))
            out[i] = in[i] + diff;
        else if (('a' <= in[i]) && (in[i] <= 'z'))
            out[i] = in[i] - diff;
        else
            out[i] = in[i];
    }
    out[i] = '\0';

    printf(" 변환된 문자 => %s \n", out);
}