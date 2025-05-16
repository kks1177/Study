// ex10-8.c
// 매개변수 전달 방법 : 값으로 전달 (Call by Value)

#include <stdio.h>

void func1(int a)
{
    a += 1;
    printf("전달 받은 a ==> %d \n", a);
}

int main()
{
    int a = 10;

    func1(a);
    printf("func1() 실행 후의 a ==> %d \n", a);
}