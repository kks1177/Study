// ex10-9.c
// 매개변수 전달 방법 : 주소로 전달 (Call by Reference)

#include <stdio.h>

void func1(int *a)
{
    *a += 1;
    printf("전달받은 a ==> %d \n", *a);
}

int main()
{
    int a = 10;

    func1(&a);
    printf("func1() 실행 후의 a ==> %d \n", a);
}