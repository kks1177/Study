// exam7-18.c
// 입력된 문자열의 종류 구분

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char str[100] = {0};
    char ch = 'a';

    int upper_cnt = 0, lower_cnt = 0, digit_cnt = 0;
    int i = 0;

    printf("문자열 입력(100자 이내) : ");
    scanf("%s", str);

    do
    {
        ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            upper_cnt++;
        if (ch >= 'a' && ch <= 'z')
            lower_cnt++;
        if (ch >= '0' && ch <= '9')
            digit_cnt++;

        i++;
    } while (ch != '\0');

    printf("대문자 %d개, 소문자 %d개, 숫자 %d개 \n", upper_cnt, lower_cnt, digit_cnt);
}