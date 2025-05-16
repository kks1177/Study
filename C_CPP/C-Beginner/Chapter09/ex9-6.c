// ex9-6.c
// 일반 변수와 포인터 변수의 관계

#include <stdio.h>

int main()
{
    char ch = 'a';
    char *p;

    ch = 'A';
    p = &ch;

    printf("ch가 가지고 있는 값 : ch ==> %c \n", ch);
    printf("ch의 주소(address) : &ch ==> %d \n", &ch);
    printf("p가 가지고 있는 값 : p ==> %d \n", p);
    printf("p가 가리키는 곳의 실제 값 : *p ==> %c \n", *p);
}