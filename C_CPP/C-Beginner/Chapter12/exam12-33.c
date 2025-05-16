// exam12-33.c
// 입력된 문자열을 반대 순서로 출력

#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main()
{
    char *p[3];
    char imsi[100] = {0};
    int i = 0, k = 0, size = 0;

    for (i = 0; i < 3; i++)
    {
        printf(" %d번째 문자열 : ", i + 1);
        gets(imsi);

        size = strlen(imsi);
        p[i] = (char *)malloc((sizeof(char) * size) + 1);

        strcpy(p[i], imsi);
    }

    printf("\n -- 입력과 반대로 출력(포인터) : 글자 순서도 거꾸로 --\n");
    for (i = 2; i >= 0; i--)
    {
        size = strlen(p[i]);
        imsi[size] = '\0';
        for (k = size - 1; k >= 0; k--)
            imsi[size - 1 - k] = p[i][k];

        printf(" %d :%s\n", i + 1, imsi);
    }

    for (i = 0; i < 3; i++)
        free(p[i]);
}