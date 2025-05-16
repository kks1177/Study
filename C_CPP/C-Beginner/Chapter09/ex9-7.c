// ex9-7.c
// 포인터의 관계 이해하기

#include <stdio.h>

int main()
{
    char ch = 'a';
    char *p, *q;

    ch = 'A';
    p = &ch;

    q = p;

    *p = 'Z';

    printf("ch가 가지고 있는 값 : ch ==> %c \n\n", ch);
}