// ex5-3.c
// 기본 if문 사용 예 3

#include <stdio.h>

int main()
{
    int a = 200;

    if (a < 100)
    {
        printf("100보다 작군요..\n");
        printf("거짓이므로 이 문장은 안 보이겠죠?\n");
    }
    printf("프로그램 끝! \n");
}