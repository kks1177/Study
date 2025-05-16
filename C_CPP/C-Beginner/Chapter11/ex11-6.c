// ex11-6.c
// 문자 입출력 함수 사용 예 4

#include <stdio.h>

int main()
{
    char ch = 'a';

    printf("문자열 입력 : ");
    ch = getchar();
    putchar(ch);

    ch = getchar();
    putchar(ch);

    ch = getchar();
    putchar(ch);
}