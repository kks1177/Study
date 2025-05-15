// ex5-5.c
// 블록을 활용한 if~else문 사용 예 1

#include <stdio.h>

int main()
{
    int a = 200;

    if (a < 100)
    {
        printf("100보다 작군요.. \n");
        printf("참이면 이 문장도 보이겠죠? \n");
    }
    else
    {
        printf("100보다 크군요.. \n");
        printf("거짓이면 이 문장도 보이겠죠? \n");
    }
    printf("프로그램 끝! \n");
}