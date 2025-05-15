// exam7-19.c
// 입력된 숫자만큼 별표 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char str[100] = {0};
    char ch = 'a';

    int i = 0, k = 0;
    int star = 0;

    printf("숫자 여러개 입력 : ");
    scanf("%s", str);

    ch = str[i];
    while (ch != '\0')
    {
        star = (int)ch - 48;

        for (k = 0; k < star; k++)
            printf("*");
        printf("\n");
        i += 1;
        ch = str[i];
    }
}