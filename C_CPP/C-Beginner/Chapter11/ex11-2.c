// ex11-2.c
// 문자열 입출력 사용 예

#include <stdio.h>

int main()
{
    char s[20] = {0};

    printf("문자열 입력 : ");
    gets(s);

    puts(s);
}