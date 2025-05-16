// exam10-28.c
// 함수를 이용한 대.소문자 변환 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char upper(char ch)
{
    return ch + ('a' - 'A');
}

int main()
{
    char in[100] = {0}, out[100] = {0};
    char ch = 'a';
    int i = 0;

    printf("문자열 입력(100자 이내) : ");
    scanf("%s", in);

    do
    {
        ch = in[i];
        if (ch >= 'A' && ch >= 'Z')
            out[i] = lower(ch);
        else if (ch >= 'a' && ch <= 'z')
            out[i] = upper(ch);
        else
            out[i] = ch;
        i++;
    } while (ch != '\0');

    out[i] = '\0';
    printf("변환된 결과 ==> %s \n", out);
}