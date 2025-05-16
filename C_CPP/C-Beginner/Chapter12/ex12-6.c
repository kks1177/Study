// ex12-6.c
// 2차원 배열 사용 예

#include <stdio.h>

int main()
{
    char data[3][100] = {0};
    int i = 0;

    for (i = 0; i < 3; i++)
    {
        printf(" %d번째 문자열 : ", i + 1);
        gets(data[i]);
    }

    printf("\n -- 입력과 반대로 출력(이차원 배열) --\n");
    for (i = 2; i >= 0; i--)
        printf(" %d :%s\n", i + 1, data[i]);
}