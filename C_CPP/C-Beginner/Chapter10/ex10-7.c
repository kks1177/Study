// ex10-7.c
// 반환값 유무에 따른 함수 비교

#include <stdio.h>

void func1()
{
    printf("void형 함수는 돌려줄 게 없음. \n");
}
int func2()
{
    return 100;
}

int main()
{
    int a = 0;

    func1();

    a = func2();
    printf("int형 함수에서 돌려준 값 ==> %d \n", a);
}