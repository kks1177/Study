// ex12-7.c
// 포인터 배열 사용 예

#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main()
{
    char *p[3];
    char imsi[100] = {0};
    int i = 0, size = 0;

    for (i = 0; i < 3; i++)
    {
        printf(" %d번째 문자열 : ", i + 1);
        gets(imsi);

        size = strlen(imsi);
        p[i] = (char *)malloc((sizeof(char) * size) + 1);

        strcpy(p[i], imsi);
    }

    printf("\n --입력과 반대로 출력(포인터) --\n");
    for (i = 2; i >= 0; i--)
        printf(" %d :%s\n", i + 1, p[i]);

    for (i = 0; i < 3; i++)
        free(p[i]);
}