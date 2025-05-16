// ex9-9.c
// 문자형 배열과 포인터의 관계 2

#include <stdio.h>

int main()
{
    char s[8] = "Basic-C";
    char *p;
    int i = 0;

    p = s;

    for (i = sizeof(s) - 2; i >= 0; i--)
    {
        printf("%c", *(p + i));
    }
    printf("\n");
}