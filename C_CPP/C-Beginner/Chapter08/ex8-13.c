// ex8-13.c
// 문자열 입출력 함수 gets(), puts() 사용 예

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main()
{
    char ss[20] = {0};
    char tt[20] = {0};
    int r1 = 0, r2 = 0;

    puts("첫 번째 문자열 입력 : ");
    gets(ss);

    puts("두 번째 문자열 입력 : ");
    gets(tt);

    r1 = strlen(ss);
    r2 = strlen(tt);

    printf("첫 번째 문자열의 길이 ==> %d \n", r1);
    printf("두 번째 문자열의 길이 ==> %d \n", r2);

    if (strcmp(ss, tt) == 00)
        puts("두 문자열의 내용이 같음 \n");
    else
        puts("두 문자열의 내용이 다름 \n");
}