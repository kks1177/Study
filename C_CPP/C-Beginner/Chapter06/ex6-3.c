// ex6-3.c
// for문과 블록 사용 예

#include <stdio.h>

int main()
{
    int i = 0;

    for (i = 0; i < 3; i++)
    {
        printf("안녕하세요?\n");
        printf("##또 안녕하세요?## \n");
    }
    printf("\n\n");

    for (i = 0; i < 3; i++)
        printf("안녕하세요? \n");
    printf("##또 안녕하세요?## \n");
}