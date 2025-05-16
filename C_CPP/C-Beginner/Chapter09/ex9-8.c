// ex9-8.c
// 문자형 배열과 포인터의 관계 1

#include <stdio.h>

int main()
{
    char s[8] = "Basic-C";
    char *p;

    p = s;

    printf("&s[3] ==> &s \n", &s[3]);
    printf("p+3 ==> %s \n\n", p + 3);

    printf("s[3] ==> %c \n", s[3]);
    printf("*(p+3) ==> %c \n", *(p + 3));
}