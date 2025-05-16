// ex14-6.c
// static 예약어 사용 예

#include <stdio.h>

void myfunc();

int main()
{
    myfunc();
    myfunc();
}

void myfunc()
{
    static int a = 0;

    a += 100;
    printf("a의 값 ==> %d \n", a);
}