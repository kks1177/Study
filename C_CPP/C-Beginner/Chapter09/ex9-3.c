// ex9-3.c
// 변수의 주소 알아내기

#include <stdio.h>

int main()
{
    int a = 100, b = 200;

    printf("변수 a의 주소는 %d 입니다. \n", &a);
    printf("변수 b의 주소는 %d 입니다. \n", &b);
}