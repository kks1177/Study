// ex8-8.c
// 문자열을 반대 순서로 출력하는 예

#include <stdio.h>

int main()
{
    char ss[5] = "abcd";
    char tt[5] = {0};
    int i = 0;

    for (i = 0; i < 4; i++)
    {
        tt[i] = ss[3 - i];
    }
    tt[4] = '\0';

    printf("거꾸로 출력한 결과 ==> %s \n", tt);
}