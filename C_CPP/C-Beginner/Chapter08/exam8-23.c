// exam8-23.c
// 문자열 내 특정 문자의 변환

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main()
{
    char str[100] = {0};
    char ch1 = 'a', ch2 = 'a';
    int i = 0;

    printf("여러 글자 입력 : ");
    gets(str);

    printf("기존 문자와 새로운 문자 : ");
    scnaf("%c %c", &ch1, &ch2);

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == ch1)
            str[i] = ch2;
    }
    printf("변환된 결과 ==> %s \n", str);
}